#include <stdio.h>

// �ڷ���? ������ ����?

/// > ��������				Byte		���� �� �ִ� ���� ����
// short			:		2byte		:  -32768 ~ 32767
// int	���ֻ��	:		4byte		:  -21�� ~ 21��
// long				:		8byte		:  -922�� ~ 922��

/// > �Ǽ�����
// float  ���ֻ��	:		4byte 		:  -21�� ~ 21��     �Ҽ��� 6��°�ڸ�
// double ���ֻ��	:		8byte 		:  -922�� ~ 922��   �Ҽ��� 15��°�ڸ�

/// > ��������
// char				:		1byte		:  -127 ~ 128
// �ƽ�Ű�ڵ� : A 65  a 97


int main()
{
	// ������ ����

	// �������� ����
	int number;

	// ������ �ʱ�ȭ
	number = 10;
	// = : ���Կ�����

	printf("number = %d \n", number);

	// �Ǽ����� ����
	// ����� ���ÿ� �ʱ�ȭ
	float fnum = 3.14f;

	printf("fnum = %.2f \n", fnum);

	char c = 'a';
	printf("%c \n", c);
	char c2 = 97;
	printf("%d \n", c2);
	printf("%c \n", c2);



	return 0;
}