#include <stdio.h>

// 다중포인터
/// > 포인터를 참조하는 포인터

int main()
{
	int num = 10;
	
	int* p = &num;

	*p += 10;

	printf("%d\n", num);
	printf("%d\n", *p);

	int** pp = &p;

	//printf("%d\n", *pp); X
	*pp += 10;
	// *pp = 10;

	printf("%d\n", num);
	printf("%d\n", *p);
	printf("%d\n", **pp);


	return 0;
}