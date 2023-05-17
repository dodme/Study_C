#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

// ������?
/// ���α׷��� �帧�� ���ϴ� �������� �����ϴ°�
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
#pragma region ĳ���� �������
	enum CharacterJob player = 0;
	int playerHp = 0;
	int playerDamage = 0;


	int inputNum = 0;
	printf("Ű�̳� ����?\n");
	printf("1.���� 2.������ 3.�ü�\n");
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
		printf("����\n");
		player = None;
		return 0;
	}

#pragma endregion

#pragma region ���� �������
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

#pragma region �ΰ���

	printf("���Ͱ� ����Ͽ����ϴ�.\n");

	switch (monster)
	{
	case 0:
		printf("����� ������������ ����Ͽ����ϴ�.\n");
		break;
	case 1:
		printf("����� ����������� ����Ͽ����ϴ�.\n");
		break;
	case 2:
		printf("����� �Ķ��������� ����Ͽ����ϴ�.\n");
		break;
	case 3:
		printf("����� ������������ ����Ͽ����ϴ�.\n");
		break;
	}
	printf("--------���� ����-------\n");
	printf("ü�� : %d\n", monsterHp);
	printf("���ݷ� : %d\n", monsterDamage);

	while ((playerHp > 0) && (monsterHp > 0))
	{
		printf("1.�ο�� 2.����ģ��\n");
		scanf("%d", &inputNum);

		printf("\n");

		if (inputNum == 1)
		{
			printf("���͸� �����մϴ�.\n");
			monsterHp -= playerDamage;
			printf("������ ���� ü���� %d�Դϴ�.\n", monsterHp);

			printf("\n");

			int randNumber = rand() % 101;

			if (randNumber > 50)
				continue;

			printf("���Ͱ� �ݰ��մϴ�.\n");
			playerHp -= monsterDamage;
			printf("����� ���� ü���� %d �Դϴ�.\n", playerHp);
		}
		else
		{
			printf("�����ϳפ�\n");
			return 0;
		}
	}


#pragma endregion

	return 0;
}





// ������ �õ尪 (�ð�)
// ���� �˰��� : srand();
// rand()

//srand(GetticCount64());
////GettickCount() : 49��
////GettickCount64() : 3����


//for (int i = 0; i < 10; i++)
//{
//	int randNumber = rand() % 100 + 1;
//	printf("%d\n", randNumber);
//}
