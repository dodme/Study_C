#include <stdio.h>

// void 포인터

int main()
{
	void* p;

	int A = 10;
	

	char* str = "Hello World!";

	//p = &c;

	printf("%d\n\n\n", sizeof(str));
	// 모든 포인터변수는 메모리의 주소를 담고, 4byte가 할당된다.


	//printf("%d\n", *((int*)p));

	
	return 0;
}