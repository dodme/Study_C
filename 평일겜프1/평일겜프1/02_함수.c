#include <stdio.h>

int Add(int n)
{
	return n + 10;
}

int main()
{
	int num = 10;
	//num = Add(num);
	printf("%d\n", Add(num));

	return 0;
}