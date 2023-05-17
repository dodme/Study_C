#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#pragma warning (disable : 4996)

// 직업
enum Job
{
	전사,
	마법사,
	궁수,
};

int main()
{
	enum Job job;
	int playerHp = 0;
	int playerAtk = 0;
	int playerDef = 0;

	int monsterHp = 0;
	int monsterAtk = 0;
	int monsterDef = 0;

	// 직업 선택
	printf("직업을 선택하세요.\n");
	printf("1. 전사  2. 마법사  3. 궁수\n");
	scanf("%d", &job);

	switch (job)
	{
	case 1:
		printf("선택한 직업은 전사입니다.\n");
		playerHp = 200;
		playerAtk = 15;
		playerDef = 10;
		break;
	case 2:
		printf("선택한 직업은 마법사입니다.\n");
		playerHp = 100;
		playerAtk = 30;
		playerDef = 0;
		break;
	case 3:
		printf("선택한 직업은 궁수입니다.\n");
		playerHp = 150;
		playerAtk = 20;
		playerDef = 5;
		break;
	default:
		printf("잘못된 선택입니다.\n");
		exit(0);
		break;
	}


	// 직업선택 후 게임 진행여부
	int play = 0;
	printf("게임을 진행하시겠습니까?\n");
	printf("1.전투   2.종료\n");
	scanf("%d", &play);

	if (play == 1)
	{
		// 몬스터 랜덤소환
		srand(time(NULL));
		int monster = 0;
		monster = rand()%3+1;

		switch (monster)
		{
		case 1:
			printf("슬라임과의 전투를 시작합니다.\n");
			monsterHp = 30;
			monsterAtk = 5;
			monsterDef = 0;
			break;
		case 2:
			printf("고블린과의 전투를 시작합니다.\n");
			monsterHp = 50;
			monsterAtk = 10;
			monsterDef = 5;
			break;
		case 3:
			printf("드래곤과의 전투를 시작합니다.\n");
			monsterHp = 1000;
			monsterAtk = 500;
			monsterDef = 100;
			break;
		}

		Sleep(1000);
		system("cls");
		
		while (1)
		{
			// 플레이어와 몬스터 데미지
			int playerDmg = (playerAtk - monsterDef);
			int monsterDmg = (monsterAtk - playerAtk);

			// 공격력 - 방여력이 -일 떄 체력이 회복되는 현상 방지
			if (playerDmg <= 0)
				playerDmg = 0;

			if (monsterDmg <= 0)
				monsterDmg = 0;

			// 플레이어 공격
			printf("플레이어의 공격!\n");
			printf("%d의 데미지를 입혔습니다.\n", playerDmg);
			monsterHp -= playerDmg;

			Sleep(1000);
			
			// 몬스터 공격
			printf("몬스터의 공격!\n");
			printf("%d의 데미지를 입었습니다.\n", monsterDmg);
			playerHp -= monsterDmg;

			Sleep(1000);
			system("cls");

			printf("플레이어 남은 Hp : %d\n", playerHp);
			printf("몬스터 남은 Hp : %d\n", monsterHp);

			Sleep(1000);

			// 전투 종료
			if (playerHp <= 0)
			{
				printf("전투에 패배했습니다.\n");
				break;
			}
			else if (monsterHp <= 0)
			{
				printf("전투에 승리했습니다.\n");
				break;
			}
		}


	}
	else
	{
		printf("프로그램을 종료합니다.\n");
	}




	return 0;
}