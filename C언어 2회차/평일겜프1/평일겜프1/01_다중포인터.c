#include <stdio.h>

// ����������
/// > �����͸� �����ϴ� ������

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