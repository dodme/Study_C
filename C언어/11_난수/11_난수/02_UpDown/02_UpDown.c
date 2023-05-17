#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// 게임 난이도
typedef enum tag_GameLevel
{
	EASY = 1,
	NORMAL = 2,
	HARD = 3,
	KOREAN = 4
}GameLevel;

// 입력 결과를 나타내기 위한 타입
typedef enum tag_InputResult
{
	UP,
	DOWN,
	CORRECT
}InputResult;

// 난수 범위 정보 구조체
typedef struct tag_RandomRangeInfo
{
	int min, max;
}RandomRangeInfo;

// 게임 정보
typedef struct tag_GameInfo
{
	int life;
	int computerNumber;
}GameInfo, * PGameInfo;

// 함수 선언
RandomRangeInfo get_random_range(GameLevel gameLevel);

void initialize_game_info(PGameInfo gameInfoToInit)
{

	printf("난이도를 선택하세요! \n");
	printf("1. EASY \n");
	printf("2. NORMAL \n");
	printf("3. HARD \n");
	printf("4. KOREAN \n");
	int select;
	scanf("%d", &select);

	system("cls");

	// 게임 레벨
	GameLevel gameLevel = select;

	// 난수 범위 설정
	RandomRangeInfo randomRangeInfo = get_random_range(gameLevel);

	gameInfoToInit->life = 5;
	gameInfoToInit->computerNumber =
		(rand() % randomRangeInfo.max) + (rand() % randomRangeInfo.min);
}

// 난수 범위를 반환하는 함수
RandomRangeInfo get_random_range(GameLevel gameLevel)
{
	RandomRangeInfo randomRangeInfo;
	switch (gameLevel)
	{
	case EASY:
		randomRangeInfo.min = 1;
		randomRangeInfo.max = 30;
		break;
	case NORMAL:
		randomRangeInfo.min = 1;
		randomRangeInfo.max = 50;
		break;
	case HARD:
		randomRangeInfo.min = 1;
		randomRangeInfo.max = 100;
		break;
	case KOREAN:
		randomRangeInfo.min = 1;
		randomRangeInfo.max = 500;
		break;
	}

	return randomRangeInfo;
}

// 게임 종료를 확인하는 함수
BOOL is_game_over(const PGameInfo pGameInfo)
{
	return (pGameInfo->life == 0) ? TRUE : FALSE;
}

// 상태 정보를 출력하는 함수
void print_state(const PGameInfo pGameInfo)
{
	printf("남은 기회 : %d \n", pGameInfo->life);
}

// 입력 결과를 출력하는 함수
InputResult print_result(const PGameInfo pGameInfo, int inputNumber)
{
	if (pGameInfo->computerNumber == inputNumber)
		return CORRECT;
	else if (pGameInfo->computerNumber > inputNumber)
		return UP;
	else return DOWN;
}

int main()
{
	// 시드 설정
	srand(GetTickCount64());

	// 게임 정보
	GameInfo gameInfo;
	
	// 게임 정보 초기화
	initialize_game_info(&gameInfo);

	// 게임 오버 확인
	while (!is_game_over(&gameInfo))
	{
		// 상태 정보 출력
		print_state(&gameInfo);

		printf("숫자를 입력하시오 : ");
		int inputNumber;
		scanf("%d", &inputNumber);

		// 기회 하락
		--gameInfo.life;

		if (print_result(&gameInfo, inputNumber) == UP)
			printf("UP!");
		if (print_result(&gameInfo, inputNumber) == DOWN)
			printf("DOWN!");
		if (print_result(&gameInfo, inputNumber) == CORRECT)
		{
			printf("정답!");
			break;
		}

		Sleep(1000);
		system("cls");
	}

	// 기회, 정답 출력
	printf("남은 기회 : %d \n", gameInfo.life);
	printf("정답 : %d \n", gameInfo.computerNumber);

	return 0;
}