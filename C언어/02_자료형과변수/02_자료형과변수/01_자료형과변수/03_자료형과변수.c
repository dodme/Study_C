#include <stdio.h>

// �ε� �Ҽ��� ����
/// - float			4byte		��ȿ �ڸ� [7�ڸ�]
/// - double		8byte		��ȿ �ڸ� [15�ڸ�]


int main()
{
	float myFloat = 3.14f;
	/// - �� �ڿ� f �� �ۼ��Ͽ� float ���� ���ͷ��� ��Ÿ���ϴ�.
	printf("myFloat = %.2f \n", myFloat);
	printf("myFloat size = %u \n", sizeof(myFloat));

	double myDouble = 123.4567;
	printf("myDouble = %.4f \n", myDouble);
	printf("myDouble size = %u \n", sizeof(myDouble));


	return 0;
}



//	> ������ ���� ������ �����ϰ� �ʱ�ȭ �Ͽ� ����غ�����!
/// - int  �ڷ��� ���� A �� ����� 100�� �����Ͽ� ����غ�����!
/// - char �ڷ��� ���� B �� ����� 'A'�� �����Ͽ� ����غ�����!
/// - double �ڷ��� ���� C �� ����� 3.14 �� �����Ͽ� ����غ�����!