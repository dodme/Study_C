#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// ö���� �������� ��ȭ�մϴ�.
// �Ź� ��ȭ ���� �� "��ȭ ����", "��ȭ ����" �� �ϳ��� ������ �� �ֽ��ϴ�.

// - ��ȭ ���� ���� -> ���α׷��� ����
// - ��ȭ ���� ���� -> Ȯ���� ���� ������ ��ȭ�� �����մϴ�.

// ��ȭ ������ ���� Ȯ��		| ��ȭ�� ������ �̸� -> ����� �Է�
/// - 0�� -> 1�� : 90%			| ��ȭ�� ���� : 10 ��
/// - 1�� -> 2�� : 70%			| ��ȭ ���� : ��ȭ ��ġ + 1
/// - 2�� -> 3�� : 50%			| ��ȭ ���� : ��ȭ ��ġ�� 0 �� �ƴ϶�� - 1
/// - 3�� -> 4�� : 30%			| �Ź� ��ȭ �õ� �� : 80% �� Ȯ���� ��ȭ�� (-1)
/// - 4�� -> 5�� : 10%			| 
/// - 5�� �̻�	 :  5%			| 
 
int main()
{
	// ��ȭ��
	int reinforce = 0;
	// ��ȭ Ȯ��
	int reinforceProbality = 0;
	// ��ȭ�� ����
	int reinforcementStone = 10;
	// ��ȭ�õ� ����
	int play = 0;

	while (1)
	{
		printf("��ȭ�� �����մϴ�. \n");
		printf("���� ��ȭ ��ġ : %d �� \n", reinforce);
		printf("���� ��ȭ�� ���� : %d �� \n", reinforcementStone);
		printf("��ȭ���� : 1 \n");
		printf("��ȭ���� : 0 \n");

		scanf("%d \n", &play);


		if (play == 1)
		{
			// ��ȭ���� 80% �� �ı�
			int stoneBreak = rand() % 101;
			if (stoneBreak <= 80)
				--reinforcementStone;

			if (reinforcementStone <= 0)
			{
				printf("��ȭ���� �����Ͽ� ��ȭ�� ����Ǿ����ϴ�. \n");
				printf("���� ��ȭ ��ġ : %d �� \n", reinforce);
				printf("���� ��ȭ�� ���� : %d �� \n", reinforcementStone);
				break;
			}

			if (reinforce == 0)
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 90)
				{
					printf("��ȭ�� �����߽��ϴ�! \n");
					++reinforce;
				}
			}
			else if (reinforce == 1)
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 70)
				{
					printf("��ȭ�� �����߽��ϴ�! \n");
					++reinforce;
				}
				else
				{
					printf("��ȭ�� �����߽��ϴ�! \n");
					--reinforce;
				}
			}
			else if (reinforce == 2)
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 50)
				{
					printf("��ȭ�� �����߽��ϴ�! \n");
					++reinforce;
				}
				else
				{
					printf("��ȭ�� �����߽��ϴ�! \n");
					--reinforce;
				};
			}
			else if (reinforce == 3)
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 30)
				{
					printf("��ȭ�� �����߽��ϴ�! \n");
					++reinforce;
				}
				else
				{
					printf("��ȭ�� �����߽��ϴ�! \n");
					--reinforce;
				}
			}
			else if (reinforce == 4)
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 10)
				{
					printf("��ȭ�� �����߽��ϴ�! \n");
					++reinforce;
				}
				else
				{
					printf("��ȭ�� �����߽��ϴ�! \n");
					--reinforce;
				}
			}
			else
			{
				reinforceProbality = rand() & 101;
				if (reinforceProbality <= 5)
				{
					printf("��ȭ�� �����߽��ϴ�! \n");
					++reinforce;
				}
				else
				{
					printf("��ȭ�� �����߽��ϴ�! \n");
					--reinforce;
				}
			}
		}
		else if (play == 0)
		{
			printf("��ȭ�� ����Ǿ����ϴ�. \n");
			printf("���� ��ȭ ��ġ : %d �� \n", reinforce);
			printf("���� ��ȭ�� ���� : %d �� \n", reinforcementStone);
			break;
		}
		else
			printf("1 �Ǵ� 0 �� ���ڸ� �Է��ϼ���.");
		
		Sleep(1000);
		system("cls");
	}


	return 0;
}










