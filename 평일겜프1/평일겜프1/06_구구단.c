#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int gugudan = 0;

	printf("����� ����ұ��~~~!?\n");
	scanf("%d", &gugudan);

	if (gugudan > 1 && gugudan < 10)
	{
		printf("---------%d��---------\n", gugudan);

		for (int i = 0; i < 10; i++)
		{
			printf("%d X %d = %d", gugudan, i, gugudan * i);
		}

	}
	else
	{
		printf("������ �������?\n");
	}

	return 0;
}