#include <stdio.h>
#include <Windows.h>
#pragma warning (disable : 4996)

// Text_Rpg
/// ĳ���� ���� : ����, ������, �ü�
/// �� �������� ��ų�� 2�� ������ �ֽ��ϴ�.
/// 5������ ���Ͱ� ������,
/// �� ���ʹ� �������ͽ��� �ٸ��ϴ�.
/// ���� ���� ����

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

	printf("������ �����ϼ���.\n");
	printf("1.Warrior : �⺻ ������ �ؼ��ϰ�, 20%Ȯ���� �������� �����ϴ�.\n");
	printf("2.Mage : �⺻ ������ ������ ��ų�ߵ�Ȯ���� �����ϴ�.\n");
	printf("3.Archer : ���ݽ����� ������ ü���� ����, 20%Ȯ���� 50%�� �߰����ظ� �����ϴ�.\n");
	scanf("%d", &userchoose);

	switch (userchoose)
	{
	case 1:
		SetCharacterInfo(&player, 1000, 50, Warrior, 70, 100);
		printf("������ ������ Warrior�Դϴ�.\n");
		break;
	case 2:
		SetCharacterInfo(&player, 600, 50, Mage, 200, 300);
		printf("������ ������ Mage�Դϴ�.\n");
		break;
	case 3:
		SetCharacterInfo(&player, 700, 100, Mage, 130, 200);
		printf("������ ������ Archer�Դϴ�.\n");
		break;
	default:
		printf("�߸��� �Է��Դϴ�.\n");
		return 0;
	}

	PrintCharacterInfo(player);

	printf("������ ���͸� �����ϼ���\n");
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
		printf("�߸��� �Է��Դϴ�.\n");
		break;
	}

	PrintMonsterInfo(monster);

	// ĳ���ͺ� Ư���� �ɷµ��� Ȯ���� ���� ����
	int rate = 0;
	// ��ų�ߵ�Ȯ���� ���� ����
	int skill = 0;

	if (player.job == Warrior)
	{
		while (1)
		{
			skill = Rand(10);
			rate = Rand(10);

			// �÷��̾� ����ó��
			if (skill > 4)
			{
				printf("�÷��̾��� ����!\n");
				printf("%d�� �������� �������ϴ�.\n", player.damage);
				monster.hp -= player.damage;
			}
			else if (skill > 1)
			{
				printf("��ų1 �ߵ�!\n");
				printf("%d�� �������� �������ϴ�.\n", player.skill1);
				monster.hp -= player.skill1;
			}
			else if (skill == 1)
			{
				printf("��ų2 �ߵ�!\n");
				printf("%d�� �������� �������ϴ�.\n", player.skill2);
				monster.hp -= player.skill2;
			}

			// ���� ����ó��
			if (rate > 3)
			{
				printf("������ �ݰ�!\n");
				printf("%d�� �������� �Ծ����ϴ�.\n", monster.damage);
				player.hp -= monster.damage;
			}
			else if (rate >= 1)
			{
				printf("������ �ݰ�!\n");
				printf("������ ����߽��ϴ�.\n");
			}

			if (player.hp <= 0)
			{
				printf("�÷��̾ �й��߽��ϴ�.\n");
				return 0;
			}
			else if (monster.hp <= 0)
			{
				printf("�÷��̾ �¸��߽��ϴ�.\n");
				return 0;
			}

			// ���� ���� �ϳ������ۿ� ������ ���߾���
		}
	}


	return 0;
}