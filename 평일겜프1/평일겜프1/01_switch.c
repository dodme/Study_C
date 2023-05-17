#include <stdio.h>

// switch구문
/// swtich(검사할 값)
/// {
///		case 값1:
///			{ 실행할 코드 }
///		case 값2:
///			{ 실행할 코드 }
///		case 값3:
///			{ 실행할 코드 }
///		default:
///			{ 실행할 코드 }
/// }

int main()
{
	int num = 1;

	switch (num)
	{
	case 1:
		printf("1입니다.\n");
		break;
	case 2:
		printf("2입니다.\n");
		break;
	case 3:
		printf("3입니다.\n");
		break;
	default:
		printf("몰라\n");
		break;
	}


	return 0;
}