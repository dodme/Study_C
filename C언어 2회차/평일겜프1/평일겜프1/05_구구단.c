#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	// �ݺ����� ���� ����
	int count = 1;

	int result = 0;
	printf("����� ����ұ��?\n");
	scanf("%d", &result);

	while(count < 10)
	{
		printf("%d X %d = %d\n", result, count, (result * count));
		count++;
	}


	return 0;
}