#include <stdio.h>

int main()
{
	int N = 10;
	int M = 20;

	int* p = NULL;

	p = &M;
	p = &N;

	*p += 10;

	printf("%d\n", M);
	printf("%d\n", *p);


	return 0;
}