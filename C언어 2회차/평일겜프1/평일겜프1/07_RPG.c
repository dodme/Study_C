#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#pragma warning (disable : 4996)

// ����
enum Job
{
	����,
	������,
	�ü�,
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

	// ���� ����
	printf("������ �����ϼ���.\n");
	printf("1. ����  2. ������  3. �ü�\n");
	scanf("%d", &job);

	switch (job)
	{
	case 1:
		printf("������ ������ �����Դϴ�.\n");
		playerHp = 200;
		playerAtk = 15;
		playerDef = 10;
		break;
	case 2:
		printf("������ ������ �������Դϴ�.\n");
		playerHp = 100;
		playerAtk = 30;
		playerDef = 0;
		break;
	case 3:
		printf("������ ������ �ü��Դϴ�.\n");
		playerHp = 150;
		playerAtk = 20;
		playerDef = 5;
		break;
	default:
		printf("�߸��� �����Դϴ�.\n");
		exit(0);
		break;
	}


	// �������� �� ���� ���࿩��
	int play = 0;
	printf("������ �����Ͻðڽ��ϱ�?\n");
	printf("1.����   2.����\n");
	scanf("%d", &play);

	if (play == 1)
	{
		// ���� ������ȯ
		srand(time(NULL));
		int monster = 0;
		monster = rand()%3+1;

		switch (monster)
		{
		case 1:
			printf("�����Ӱ��� ������ �����մϴ�.\n");
			monsterHp = 30;
			monsterAtk = 5;
			monsterDef = 0;
			break;
		case 2:
			printf("������� ������ �����մϴ�.\n");
			monsterHp = 50;
			monsterAtk = 10;
			monsterDef = 5;
			break;
		case 3:
			printf("�巡����� ������ �����մϴ�.\n");
			monsterHp = 1000;
			monsterAtk = 500;
			monsterDef = 100;
			break;
		}

		Sleep(1000);
		system("cls");
		
		while (1)
		{
			// �÷��̾�� ���� ������
			int playerDmg = (playerAtk - monsterDef);
			int monsterDmg = (monsterAtk - playerAtk);

			// ���ݷ� - �濩���� -�� �� ü���� ȸ���Ǵ� ���� ����
			if (playerDmg <= 0)
				playerDmg = 0;

			if (monsterDmg <= 0)
				monsterDmg = 0;

			// �÷��̾� ����
			printf("�÷��̾��� ����!\n");
			printf("%d�� �������� �������ϴ�.\n", playerDmg);
			monsterHp -= playerDmg;

			Sleep(1000);
			
			// ���� ����
			printf("������ ����!\n");
			printf("%d�� �������� �Ծ����ϴ�.\n", monsterDmg);
			playerHp -= monsterDmg;

			Sleep(1000);
			system("cls");

			printf("�÷��̾� ���� Hp : %d\n", playerHp);
			printf("���� ���� Hp : %d\n", monsterHp);

			Sleep(1000);

			// ���� ����
			if (playerHp <= 0)
			{
				printf("������ �й��߽��ϴ�.\n");
				break;
			}
			else if (monsterHp <= 0)
			{
				printf("������ �¸��߽��ϴ�.\n");
				break;
			}
		}


	}
	else
	{
		printf("���α׷��� �����մϴ�.\n");
	}




	return 0;
}