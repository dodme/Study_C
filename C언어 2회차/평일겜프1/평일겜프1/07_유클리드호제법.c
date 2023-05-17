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
	printf("최대공약수는 %d 입니다.\n", N);

	return 0;
}