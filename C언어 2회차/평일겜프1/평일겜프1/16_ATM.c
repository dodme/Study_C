#include <stdio.h>
#pragma warning (disable : 4996)

// ATM기기를 만듭니다.
// ----있어야할 기능----
/// 입금, 출금, 현재잔액, 종료, 초기금액(20000)
// 사용자에게 행동여부를 입력받아 프로그램을 작성하세요.

typedef struct
{
	int money;
}ATM;

//입금
void Deposit(ATM* atm, int depositMoney)
{
	atm->money += depositMoney;
	printf("%d원 입금되었습니다.\n", depositMoney);
}

//출금
void Withdraw(ATM* atm, int withdrawMoney)
{
	if ((atm->money - withdrawMoney) >= 0)
	{
		atm->money -= withdrawMoney;
	}
	else
	{
		printf("잔액이 부족합니다.\n");
	}
}

void PrintMoneyInfo(ATM atm)
{
	printf("현재 잔액 : %d원\n", atm.money);
}

int main()
{
	ATM atm;
	atm.money = 20000;
	int button = 0;

	printf("원하시는 작업을 선택해주세요.\n");

	while (1)
	{
		int money = 0;
		printf("1.입금  2.출금  3.현재잔액  0.종료\n");
		scanf("%d", &button);
		switch (button)
		{
			//입금
		case 1:
			printf("입금할 금액을 입력하세요.\n");
			scanf("%d", &money);
			printf("%d원을 입금하시겠습니까?\n", money);
			printf("1.확인  2.취소\n");
			scanf("%d", &button);
			(button == 1) ? Deposit(&atm, money) : printf("취소되었습니다.\n");
			PrintMoneyInfo(atm);
			break;

			//출금
		case 2:
			printf("출금할 금액을 입력하세요.\n");
			scanf("%d", &money);
			printf("%d원을 출금하시겠습니까?\n", money);
			printf("1.확인  2.취소\n");
			scanf("%d", &button);
			(button == 1) ? Withdraw(&atm, money) : printf("취소되었습니다.\n");
			PrintMoneyInfo(atm);
			break;

			//현재 잔액
		case 3:
			PrintMoneyInfo(atm);
			break;

			// 종료
		case 0:
			printf("종료되었습니다.\n");
			return 0;

			//그 외 처리
		default:
			printf("잘못된 입력입니다.\n");
			break;
		}
	}


	return 0;
}