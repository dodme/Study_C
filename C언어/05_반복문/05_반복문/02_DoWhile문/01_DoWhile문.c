#include <stdio.h>

// Do While ��
/// - ���ǽ��� ���ϱ� ����, ������ ó�� �� �� do ������
///   �����Ų ��, while ������ ���ϴ� �ݺ����Դϴ�.

// do ����;
// while(���ǽ�);

int main()
{
	int number = 10;

	do
	{
		printf("number = %d \n", number);
		number -= 2;
	} while (number != 10 && number > 0);


	return 0;
}