#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// ���� ���̵�
typedef enum tag_GameLevel
{
	EASY = 1,
	NORMAL = 2,
	HARD = 3,
	KOREAN = 4
}GameLevel;

// �Է� ����� ��Ÿ���� ���� Ÿ��
typedef enum tag_InputResult
{
	UP,
	DOWN,
	CORRECT
}InputResult;

// ���� ���� ���� ����ü
typedef struct tag_RandomRangeInfo
{
	int min, max;
}RandomRangeInfo;

// ���� ����
typedef struct tag_GameInfo
{
	int life;
	int computerNumber;
}GameInfo, * PGameInfo;

// �Լ� ����
RandomRangeInfo get_random_range(GameLevel gameLevel);

void initialize_game_info(PGameInfo gameInfoToInit)
{

	printf("���̵��� �����ϼ���! \n");
	printf("1. EASY \n");
	printf("2. NORMAL \n");
	printf("3. HARD \n");
	printf("4. KOREAN \n");
	int select;
	scanf("%d", &select);

	system("cls");

	// ���� ����
	GameLevel gameLevel = select;

	// ���� ���� ����
	RandomRangeInfo randomRangeInfo = get_random_range(gameLevel);

	gameInfoToInit->life = 5;
	gameInfoToInit->computerNumber =
		(rand() % randomRangeInfo.max) + (rand() % randomRangeInfo.min);
}

// ���� ������ ��ȯ�ϴ� �Լ�
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

// ���� ���Ḧ Ȯ���ϴ� �Լ�
BOOL is_game_over(const PGameInfo pGameInfo)
{
	return (pGameInfo->life == 0) ? TRUE : FALSE;
}

// ���� ������ ����ϴ� �Լ�
void print_state(const PGameInfo pGameInfo)
{
	printf("���� ��ȸ : %d \n", pGameInfo->life);
}

// �Է� ����� ����ϴ� �Լ�
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
	// �õ� ����
	srand(GetTickCount64());

	// ���� ����
	GameInfo gameInfo;
	
	// ���� ���� �ʱ�ȭ
	initialize_game_info(&gameInfo);

	// ���� ���� Ȯ��
	while (!is_game_over(&gameInfo))
	{
		// ���� ���� ���
		print_state(&gameInfo);

		printf("���ڸ� �Է��Ͻÿ� : ");
		int inputNumber;
		scanf("%d", &inputNumber);

		// ��ȸ �϶�
		--gameInfo.life;

		if (print_result(&gameInfo, inputNumber) == UP)
			printf("UP!");
		if (print_result(&gameInfo, inputNumber) == DOWN)
			printf("DOWN!");
		if (print_result(&gameInfo, inputNumber) == CORRECT)
		{
			printf("����!");
			break;
		}

		Sleep(1000);
		system("cls");
	}

	// ��ȸ, ���� ���
	printf("���� ��ȸ : %d \n", gameInfo.life);
	printf("���� : %d \n", gameInfo.computerNumber);

	return 0;
}