#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// Up Down ����
/// - ��ǻ�Ͱ� ���� ���ڸ� �÷��̾ ���ߴ� ����

// ���� ����
/// - ��ȸ�� 5�� (��ȸ�� 0�̶�� ���� ����)
/// - ���α׷��� ���۵� �� �� �ѹ� ������ �����մϴ�.
/// - ���̵��� ���� ������ ������ ����˴ϴ�.
/// - ���̵� EASY : ���� ���� -> 1 ~ 30
///   ���̵� NORMAL : ���� ���� -> 1 ~ 50
///   ���̵� HARD : ���� ���� -> 1 ~ 100
///   ���̵� KOREAN : ���� ���� -> 1 ~ 500
///   (���� : 1 ~ 100)
///  - �Է��� ���ڰ� ���亸�� ���� ���� ��� Up! �� ���,
///    ū ���� ��� Down! �� ����մϴ�.
/// - ������ ������ ��� ����� ���� ��ȸ�� ������ּ���!
 
int main()
{
	// ������ϴ� ����
	int rand_num;
	// �Է��� ����
	int input_num;
	// ���̵�
	int difficulty = 0;

	printf("1 : EASY   2 : NORMAL   3 : HARD   4 : KOREAN \n");
	printf("���̵��� �����ϼ��� : ");
	scanf("%d \n", &difficulty);
	
	if (difficulty == 1)
	{
		rand_num = rand() % 31;

		for (int i = 4; i > 0; --i)
		{
			printf("1 ~ 30 ������ ���ڸ� �Է����ּ���. \n");
			scanf("%d \n", &input_num);

			if (rand_num > input_num)
				printf("Up! \n");
			else if (rand_num < input_num)
				printf("Down! \n");
			else
			{
				printf("�����Դϴ�!. \n");
				printf("���� Ƚ�� : %d \n", i);
				break;
			}

			printf("%d ���� ��ȸ�� ���ҽ��ϴ�. \n", i);
		}
		printf("��ȸ�� ���� ����߽��ϴ�. \n");
		printf("���ڴ� %d �����ϴ�.", rand_num);
	}
	else if (difficulty == 2)
	{
		rand_num = rand() % 51;

		for (int i = 4; i > 0; --i)
		{
			printf("1 ~ 50 ������ ���ڸ� �Է����ּ���. \n");
			scanf("%d \n", &input_num);

			if (rand_num > input_num)
				printf("Up! \n");
			else if (rand_num < input_num)
				printf("Down! \n");
			else
			{
				printf("�����Դϴ�!. \n");
				printf("���� Ƚ�� : %d \n", i);
				break;
			}

			printf("%d ���� ��ȸ�� ���ҽ��ϴ�. \n", i);
		}
		printf("��ȸ�� ���� ����߽��ϴ�. \n");
		printf("���ڴ� %d �����ϴ�.", rand_num);
	}
	else if (difficulty == 3)
	{
		rand_num = rand() % 101;

		for (int i = 4; i > 0; --i)
		{
			printf("1 ~ 100 ������ ���ڸ� �Է����ּ���. \n");
			scanf("%d \n", &input_num);

			if (rand_num > input_num)
				printf("Up! \n");
			else if (rand_num < input_num)
				printf("Down! \n");
			else
			{
				printf("�����Դϴ�!. \n");
				printf("���� Ƚ�� : %d \n", i);
				break;
			}

			printf("%d ���� ��ȸ�� ���ҽ��ϴ�. \n", i);
		}
		printf("��ȸ�� ���� ����߽��ϴ�. \n");
		printf("���ڴ� %d �����ϴ�.", rand_num);
	}
	else if (difficulty == 4)
	{
		rand_num = rand() % 501;

		for (int i = 4; i > 0; --i)
		{
			printf("1 ~ 500 ������ ���ڸ� �Է����ּ���. \n");
			scanf("%d \n", &input_num);

			if (rand_num > input_num)
				printf("Up! \n");
			else if (rand_num < input_num)
				printf("Down! \n");
			else
			{
				printf("�����Դϴ�!. \n");
				printf("���� Ƚ�� : %d \n", i);
				break;
			}

			printf("%d ���� ��ȸ�� ���ҽ��ϴ�. \n", i);
		}
		printf("��ȸ�� ���� ����߽��ϴ�. \n");
		printf("���ڴ� %d �����ϴ�.", rand_num);
	}
	else
	{
		printf("1 ~ 4 ������ ���ڸ� �Է����ּ���. \n");
	}


	return 0;
}

