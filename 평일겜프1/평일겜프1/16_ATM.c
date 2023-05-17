#include <stdio.h>
#pragma warning (disable : 4996)

// ATM��⸦ ����ϴ�.
// ----�־���� ���----
/// �Ա�, ���, �����ܾ�, ����, �ʱ�ݾ�(20000)
// ����ڿ��� �ൿ���θ� �Է¹޾� ���α׷��� �ۼ��ϼ���.

typedef struct
{
	int money;
}ATM;

//�Ա�
void Deposit(ATM* atm, int depositMoney)
{
	atm->money += depositMoney;
	printf("%d�� �ԱݵǾ����ϴ�.\n", depositMoney);
}

//���
void Withdraw(ATM* atm, int withdrawMoney)
{
	if ((atm->money - withdrawMoney) >= 0)
	{
		atm->money -= withdrawMoney;
	}
	else
	{
		printf("�ܾ��� �����մϴ�.\n");
	}
}

void PrintMoneyInfo(ATM atm)
{
	printf("���� �ܾ� : %d��\n", atm.money);
}

int main()
{
	ATM atm;
	atm.money = 20000;
	int button = 0;

	printf("���Ͻô� �۾��� �������ּ���.\n");

	while (1)
	{
		int money = 0;
		printf("1.�Ա�  2.���  3.�����ܾ�  0.����\n");
		scanf("%d", &button);
		switch (button)
		{
			//�Ա�
		case 1:
			printf("�Ա��� �ݾ��� �Է��ϼ���.\n");
			scanf("%d", &money);
			printf("%d���� �Ա��Ͻðڽ��ϱ�?\n", money);
			printf("1.Ȯ��  2.���\n");
			scanf("%d", &button);
			(button == 1) ? Deposit(&atm, money) : printf("��ҵǾ����ϴ�.\n");
			PrintMoneyInfo(atm);
			break;

			//���
		case 2:
			printf("����� �ݾ��� �Է��ϼ���.\n");
			scanf("%d", &money);
			printf("%d���� ����Ͻðڽ��ϱ�?\n", money);
			printf("1.Ȯ��  2.���\n");
			scanf("%d", &button);
			(button == 1) ? Withdraw(&atm, money) : printf("��ҵǾ����ϴ�.\n");
			PrintMoneyInfo(atm);
			break;

			//���� �ܾ�
		case 3:
			PrintMoneyInfo(atm);
			break;

			// ����
		case 0:
			printf("����Ǿ����ϴ�.\n");
			return 0;

			//�� �� ó��
		default:
			printf("�߸��� �Է��Դϴ�.\n");
			break;
		}
	}


	return 0;
}