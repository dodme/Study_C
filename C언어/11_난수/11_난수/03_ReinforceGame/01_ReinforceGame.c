#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// 철수는 아이템을 강화합니다.
// 매번 강화 시작 전 "강화 시작", "강화 종료" 중 하나를 선택할 수 있습니다.

// - 강화 종료 선택 -> 프로그램을 종료
// - 강화 시작 선택 -> 확률에 따라 아이템 강화를 시작합니다.

// 강화 구간당 성공 확률		| 강화할 아이템 이름 -> 사용자 입력
/// - 0강 -> 1강 : 90%			| 강화석 개수 : 10 개
/// - 1강 -> 2강 : 70%			| 강화 성공 : 강화 수치 + 1
/// - 2강 -> 3강 : 50%			| 강화 실패 : 강화 수치가 0 이 아니라면 - 1
/// - 3강 -> 4강 : 30%			| 매번 강화 시도 시 : 80% 의 확률로 강화석 (-1)
/// - 4강 -> 5강 : 10%			| 
/// - 5강 이상	 :  5%			| 
 
int main()
{
	// 강화도
	int reinforce = 0;
	// 강화 확률
	int reinforceProbality = 0;
	// 강화석 갯수
	int reinforcementStone = 10;
	// 강화시도 여부
	int play = 0;

	while (1)
	{
		printf("강화를 시작합니다. \n");
		printf("현재 강화 수치 : %d 강 \n", reinforce);
		printf("남은 강화석 갯수 : %d 개 \n", reinforcementStone);
		printf("강화시작 : 1 \n");
		printf("강화종료 : 0 \n");

		scanf("%d \n", &play);


		if (play == 1)
		{
			// 강화석이 80% 로 파괴
			int stoneBreak = rand() % 101;
			if (stoneBreak <= 80)
				--reinforcementStone;

			if (reinforcementStone <= 0)
			{
				printf("강화석이 부족하여 강화가 종료되었습니다. \n");
				printf("현재 강화 수치 : %d 강 \n", reinforce);
				printf("남은 강화석 갯수 : %d 개 \n", reinforcementStone);
				break;
			}

			if (reinforce == 0)
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 90)
				{
					printf("강화에 성공했습니다! \n");
					++reinforce;
				}
			}
			else if (reinforce == 1)
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 70)
				{
					printf("강화에 성공했습니다! \n");
					++reinforce;
				}
				else
				{
					printf("강화에 실패했습니다! \n");
					--reinforce;
				}
			}
			else if (reinforce == 2)
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 50)
				{
					printf("강화에 성공했습니다! \n");
					++reinforce;
				}
				else
				{
					printf("강화에 실패했습니다! \n");
					--reinforce;
				};
			}
			else if (reinforce == 3)
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 30)
				{
					printf("강화에 성공했습니다! \n");
					++reinforce;
				}
				else
				{
					printf("강화에 실패했습니다! \n");
					--reinforce;
				}
			}
			else if (reinforce == 4)
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 10)
				{
					printf("강화에 성공했습니다! \n");
					++reinforce;
				}
				else
				{
					printf("강화에 실패했습니다! \n");
					--reinforce;
				}
			}
			else
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 5)
				{
					printf("강화에 성공했습니다! \n");
					++reinforce;
				}
				else
				{
					printf("강화에 실패했습니다! \n");
					--reinforce;
				}
			}
		}
		else if (play == 0)
		{
			printf("강화가 종료되었습니다. \n");
			printf("현재 강화 수치 : %d 강 \n", reinforce);
			printf("남은 강화석 갯수 : %d 개 \n", reinforcementStone);
			break;
		}
		else
			printf("1 또는 0 의 숫자를 입력하세요.");
		
		Sleep(1000);
		system("cls");
	}


	return 0;
}










