#include <stdio.h>

// switch����
/// swtich(�˻��� ��)
/// {
///		case ��1:
///			{ ������ �ڵ� }
///		case ��2:
///			{ ������ �ڵ� }
///		case ��3:
///			{ ������ �ڵ� }
///		default:
///			{ ������ �ڵ� }
/// }

int main()
{
	int num = 1;

	switch (num)
	{
	case 1:
		printf("1�Դϴ�.\n");
		break;
	case 2:
		printf("2�Դϴ�.\n");
		break;
	case 3:
		printf("3�Դϴ�.\n");
		break;
	default:
		printf("����\n");
		break;
	}


	return 0;
}