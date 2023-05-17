#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

// 점프문?
/// 프로그램의 흐름을 원하는 지점으로 점프하는것
/// break continue return

enum CharacterJob
{
	Warrior,
	Mage,
	Archor,
	None,
};

enum MonsterType
{
	RedSlime,
	YellowSlime,
	BlueSlime,
	BossSlime,
};

#pragma warning (disable : 4996)

int main()
{
#pragma region 캐릭터 구현목록
	enum CharacterJob player = 0;
	int playerHp = 0;
	int playerDamage = 0;


	int inputNum = 0;
	printf("키미노 직업?\n");
	printf("1.전사 2.마법사 3.궁수\n");
	scanf("%d", &inputNum);

	switch (inputNum)
	{
	case 1:
		player = Warrior;
		playerHp = 300;
		playerDamage = 10;
		break;

	case 2:
		player = Mage;
		playerHp = 100;
		playerDamage = 30;
		break;

	case 3:
		player = Archor;
		playerHp = 200;
		playerDamage = 20;
		break;

	default:
		printf("무직\n");
		player = None;
		return 0;
	}

#pragma endregion

#pragma region 몬스터 구현목록
	enum MonsterType monster = 0;
	int monsterHp = 0;
	int monsterDamage = 0;

	srand(GetTickCount64());

	int monsterSpawnPercent = rand() % 4;

	switch (monsterSpawnPercent)
	{
	case 0:
		monster = RedSlime;
		monsterHp = 30;
		monsterDamage = 1;
		break;

	case 1:
		monster = YellowSlime;
		monsterHp = 20;
		monsterDamage = 2;
		break;

	case 2:
		monster = BlueSlime;
		monsterHp = 10;
		monsterDamage = 3;
		break;

	case 3:
		monster = BossSlime;
		monsterHp = 1000;
		monsterDamage = 3000;
		break;
	}

#pragma endregion
	printf("\n");
	printf("\n");

#pragma region 인게임

	printf("몬스터가 출몰하였습니다.\n");

	switch (monster)
	{
	case 0:
		printf("흉악한 빨간슬라임이 출몰하였습니다.\n");
		break;
	case 1:
		printf("흉악한 노란슬라임이 출몰하였습니다.\n");
		break;
	case 2:
		printf("흉악한 파란슬라임이 출몰하였습니다.\n");
		break;
	case 3:
		printf("흉악한 보스슬라임이 출몰하였습니다.\n");
		break;
	}
	printf("--------몬스터 스텟-------\n");
	printf("체력 : %d\n", monsterHp);
	printf("공격력 : %d\n", monsterDamage);

	while ((playerHp > 0) && (monsterHp > 0))
	{
		printf("1.싸운다 2.도망친다\n");
		scanf("%d", &inputNum);

		printf("\n");

		if (inputNum == 1)
		{
			printf("몬스터를 공격합니다.\n");
			monsterHp -= playerDamage;
			printf("몬스터의 현재 체력은 %d입니다.\n", monsterHp);

			printf("\n");

			int randNumber = rand() % 101;

			if (randNumber > 50)
				continue;

			printf("몬스터가 반격합니다.\n");
			playerHp -= monsterDamage;
			printf("당신의 현재 체력은 %d 입니다.\n", playerHp);
		}
		else
		{
			printf("ㅋ약하네ㅋ\n");
			return 0;
		}
	}


#pragma endregion

	return 0;
}





// 난수의 시드값 (시간)
// 난수 알고리즘 : srand();
// rand()

//srand(GetticCount64());
////GettickCount() : 49일
////GettickCount64() : 3만년


//for (int i = 0; i < 10; i++)
//{
//	int randNumber = rand() % 100 + 1;
//	printf("%d\n", randNumber);
//}
