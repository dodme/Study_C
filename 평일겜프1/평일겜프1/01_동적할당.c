#include <stdio.h>
#include <stdlib.h>

// 동적할당 // 메모리누수 주의!
/// > 개발자가 원하는 곳에서 메모리를 할당받고, 원하는 곳에서 해제가능한 메모리
/// > 반드시 메모리 해제를 해줘야한다
// 동적할당 : malloc(), calloc(), realloc()
// 해제 : free()

// new, delete

// 댕글링 포인터?
/// 해제된 메모리를 여전히 가리키고있는 메모리

// 정적할당
/// > 프로그램이 시작할때부터 끝날때까지 남아있는 메모리

int main()
{
	int* p = (int*)malloc(sizeof(int));
	//int* p = (int*)calloc(3, sizeof(int));

	*p = 10;
	//p = (int*)realloc(10, sizeof(int));

	printf("%d", *p);
	
	free(p);

	p = NULL; // 댕글링 포인터 초기화

	printf("%d", *p);

	*p = 20;

	printf("%d", *p);
	return 0;
}