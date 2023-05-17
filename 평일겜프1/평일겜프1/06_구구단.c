#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int gugudan = 0;

	printf("몇단을 출력할까용~~~!?\n");
	scanf("%d", &gugudan);

	if (gugudan > 1 && gugudan < 10)
	{
		printf("---------%d단---------\n", gugudan);

		for (int i = 0; i < 10; i++)
		{
			printf("%d X %d = %d", gugudan, i, gugudan * i);
		}

	}
	else
	{
		printf("구구단 못배웠니?\n");
	}

	return 0;
}