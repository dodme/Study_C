
// Switch ��
/// - ���ǽ��� ����� ���� �� �ִ� �پ��� ��츦 �ѹ��� 
///   ���α׷��� �帧�� ���� �� ����մϴ�.

// Switch �� �����

// switch (����� �˻��� ��)
// {
// case 1 :
//		[����� �˻��� ��] �� 1 �̶�� ������ �ڵ�;
//		break;
// case 2 :
//		[����� �˻��� ��] �� 2 ��� ������ �ڵ�;
//		break;
// default :
//		[����� �˻��� ��] �� 1�� 2�� �ƴ϶�� ������ �ڵ�;
//		break;
// }

#include <stdio.h>

int main()
{
	int number = 10;


	switch (number)
	{
		case 5 :
			printf("number �� 5 �Դϴ�. \n");
			break;

		case 10 :
			printf("number �� 10 �Դϴ�. \n");
			break;
	
		default :
			printf("number �� 5�� 10�� �ƴմϴ�. \n");
			break;
	}


	return 0;
}