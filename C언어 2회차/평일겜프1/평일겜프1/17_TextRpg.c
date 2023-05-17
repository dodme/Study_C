#include <stdio.h>
#include <Windows.h>
#pragma warning (disable : 4996)

// Text_Rpg
/// 캐릭터 직업 : 전사, 마법사, 궁수
/// 각 직업마다 스킬을 2개 가지고 있습니다.
/// 5마리의 몬스터가 있으며,
/// 각 몬스터는 스테이터스가 다릅니다.
/// 전투 구현 ㄱㄱ

typedef enum
{
	Warrior,
	Mage,
	Archer,
}Job;

typedef enum
{
	Slime,
	Goblin,
	Dragon
}MonsterType;

typedef struct
{
	Job job;
	int hp;
	int damage;
	int skill1;
	int skill2;
}Character;

typedef struct
{
	MonsterType monstertype;
	int hp;
	int damage;
}Monster;

void SetCharacterInfo(Character* player, int hp, int damage, Job job, int skill1, int skill2)
{
	player->hp = hp;
	player->damage = damage;
	player->job = job;
	player->skill1 = skill1;
	player->skill2 = skill2;
}

void PrintCharacterInfo(Character player)
{
	printf("hp : %d\n", player.hp);
	printf("damage : %d\n", player.damage);
	printf("skill1 damage : %d\n", player.skill1);
	printf("skill2 damage : %d\n", player.skill2);
}

void SetMonsterInfo(Monster* monster, int hp, int damage, MonsterType monstertype)
{
	monster->hp = hp;
	monster->damage = damage;
	monster->monstertype = monstertype;
}

void PrintMonsterInfo(Monster monster)
{
	printf("hp : %d\n", monster.hp);
	printf("damage : %d\n", monster.damage);
}

int Rand(int maxValue)
{
	return rand() % maxValue;
}

int main()
{
	srand(GetTickCount64());

	Character player = { 0 };

	int userchoose = 0;

	printf("직업을 선택하세요.\n");
	printf("1.Warrior : 기본 스텟이 준수하고, 20%확률로 데미지를 막습니다.\n");
	printf("2.Mage : 기본 스텟이 낮지만 스킬발동확률이 높습니다.\n");
	printf("3.Archer : 공격스텟은 높지만 체력이 낮고, 20%확률로 50%의 추가피해를 입힙니다.\n");
	scanf("%d", &userchoose);

	switch (userchoose)
	{
	case 1:
		SetCharacterInfo(&player, 1000, 50, Warrior, 70, 100);
		printf("선택한 직업은 Warrior입니다.\n");
		break;
	case 2:
		SetCharacterInfo(&player, 600, 50, Mage, 200, 300);
		printf("선택한 직업은 Mage입니다.\n");
		break;
	case 3:
		SetCharacterInfo(&player, 700, 100, Mage, 130, 200);
		printf("선택한 직업은 Archer입니다.\n");
		break;
	default:
		printf("잘못된 입력입니다.\n");
		return 0;
	}

	PrintCharacterInfo(player);

	printf("전투할 몬스터를 선택하세요\n");
	printf("1.Slime  2.Goblin  3.Dragon\n");
	scanf("%d", &userchoose);

	Monster monster = { 0 };

	switch (userchoose)
	{
	case 1:
		SetMonsterInfo(&monster, 500, 20, Slime);
		printf("monster : Slime\n");
		break;
	case 2:
		SetMonsterInfo(&monster, 1000, 30, Goblin);
		printf("monster : Goblin\n");
		break;
	case 3:
		SetMonsterInfo(&monster, 10000, 1000, Dragon);
		printf("monster : Dragon\n");
		break;
	default:
		printf("잘못된 입력입니다.\n");
		break;
	}

	PrintMonsterInfo(monster);

	// 캐릭터별 특수한 능력들의 확률을 담을 변수
	int rate = 0;
	// 스킬발동확률을 담을 변수
	int skill = 0;

	if (player.job == Warrior)
	{
		while (1)
		{
			skill = Rand(10);
			rate = Rand(10);

			// 플레이어 공격처리
			if (skill > 4)
			{
				printf("플레이어의 공격!\n");
				printf("%d의 데미지를 입혔습니다.\n", player.damage);
				monster.hp -= player.damage;
			}
			else if (skill > 1)
			{
				printf("스킬1 발동!\n");
				printf("%d의 데미지를 입혔습니다.\n", player.skill1);
				monster.hp -= player.skill1;
			}
			else if (skill == 1)
			{
				printf("스킬2 발동!\n");
				printf("%d의 데미지를 입혔습니다.\n", player.skill2);
				monster.hp -= player.skill2;
			}

			// 몬스터 공격처리
			if (rate > 3)
			{
				printf("몬스터의 반격!\n");
				printf("%d의 데미지를 입었습니다.\n", monster.damage);
				player.hp -= monster.damage;
			}
			else if (rate >= 1)
			{
				printf("몬스터의 반격!\n");
				printf("공격을 방어했습니다.\n");
			}

			if (player.hp <= 0)
			{
				printf("플레이어가 패배했습니다.\n");
				return 0;
			}
			else if (monster.hp <= 0)
			{
				printf("플레이어가 승리했습니다.\n");
				return 0;
			}

			// 아직 직업 하나까지밖에 구현을 못했어요ㅠ
		}
	}


	return 0;
}