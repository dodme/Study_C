#include <stdio.h>

int main()
{
	int N = 0, M = 0;

	printf("Enter Two Integer...\n");
	scanf("%d %d", &N, &M);

	while (M != 0)
	{
		int temp = N % M;
		N = M;
		M = temp;
	}
	printf("�ִ������� %d �Դϴ�.\n", N);

	return 0;
}