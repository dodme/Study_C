#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// Up Down 게임
/// - 컴퓨터가 뽑은 숫자를 플레이어가 맞추는 게임

// 게임 조건
/// - 기회는 5번 (기회가 0이라면 게임 오버)
/// - 프로그램이 시작될 때 단 한번 난수를 생성합니다.
/// - 난이도에 따라 난수의 범위가 변경됩니다.
/// - 난이도 EASY : 난수 범위 -> 1 ~ 30
///   난이도 NORMAL : 난수 범위 -> 1 ~ 50
///   난이도 HARD : 난수 범위 -> 1 ~ 100
///   난이도 KOREAN : 난수 범위 -> 1 ~ 500
///   (범위 : 1 ~ 100)
///  - 입력한 숫자가 정답보다 작은 값일 경우 Up! 을 출력,
///    큰 값일 경우 Down! 을 출력합니다.
/// - 게임이 끝났을 경우 정답과 남은 기회를 출력해주세요!
 
int main()
{
	// 맞춰야하는 숫자
	int rand_num;
	// 입력할 숫자
	int input_num;
	// 난이도
	int difficulty = 0;

	printf("1 : EASY   2 : NORMAL   3 : HARD   4 : KOREAN \n");
	printf("난이도를 선택하세요 : ");
	scanf("%d \n", &difficulty);
	
	if (difficulty == 1)
	{
		rand_num = rand() % 31;

		for (int i = 4; i > 0; --i)
		{
			printf("1 ~ 30 사이의 숫자를 입력해주세요. \n");
			scanf("%d \n", &input_num);

			if (rand_num > input_num)
				printf("Up! \n");
			else if (rand_num < input_num)
				printf("Down! \n");
			else
			{
				printf("정답입니다!. \n");
				printf("남은 횟수 : %d \n", i);
				break;
			}

			printf("%d 번의 기회가 남았습니다. \n", i);
		}
		printf("기회를 전부 사용했습니다. \n");
		printf("숫자는 %d 였습니다.", rand_num);
	}
	else if (difficulty == 2)
	{
		rand_num = rand() % 51;

		for (int i = 4; i > 0; --i)
		{
			printf("1 ~ 50 사이의 숫자를 입력해주세요. \n");
			scanf("%d \n", &input_num);

			if (rand_num > input_num)
				printf("Up! \n");
			else if (rand_num < input_num)
				printf("Down! \n");
			else
			{
				printf("정답입니다!. \n");
				printf("남은 횟수 : %d \n", i);
				break;
			}

			printf("%d 번의 기회가 남았습니다. \n", i);
		}
		printf("기회를 전부 사용했습니다. \n");
		printf("숫자는 %d 였습니다.", rand_num);
	}
	else if (difficulty == 3)
	{
		rand_num = rand() % 101;

		for (int i = 4; i > 0; --i)
		{
			printf("1 ~ 100 사이의 숫자를 입력해주세요. \n");
			scanf("%d \n", &input_num);

			if (rand_num > input_num)
				printf("Up! \n");
			else if (rand_num < input_num)
				printf("Down! \n");
			else
			{
				printf("정답입니다!. \n");
				printf("남은 횟수 : %d \n", i);
				break;
			}

			printf("%d 번의 기회가 남았습니다. \n", i);
		}
		printf("기회를 전부 사용했습니다. \n");
		printf("숫자는 %d 였습니다.", rand_num);
	}
	else if (difficulty == 4)
	{
		rand_num = rand() % 501;

		for (int i = 4; i > 0; --i)
		{
			printf("1 ~ 500 사이의 숫자를 입력해주세요. \n");
			scanf("%d \n", &input_num);

			if (rand_num > input_num)
				printf("Up! \n");
			else if (rand_num < input_num)
				printf("Down! \n");
			else
			{
				printf("정답입니다!. \n");
				printf("남은 횟수 : %d \n", i);
				break;
			}

			printf("%d 번의 기회가 남았습니다. \n", i);
		}
		printf("기회를 전부 사용했습니다. \n");
		printf("숫자는 %d 였습니다.", rand_num);
	}
	else
	{
		printf("1 ~ 4 사이의 숫자를 입력해주세요. \n");
	}


	return 0;
}

