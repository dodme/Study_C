#include <stdio.h>
#include <stdlib.h>

// 동적할당
/// - 런타임중 메모리 공간을 할당시키는 것을 의미합니다.
/// - malloc(), calloc() 함수를 통해 동적 메모리를 할당시킬 수 있습니다.
/// - realloc() 함수를 통해 메모리 재할당이 가능합니다.
/// - free() 함수를 통해 사용되지 않는 동적 메모리를 해제할 수 있습니다.
/// - 댕글링 포인터가 되지 않도록 항상 해제 후 NULL 값을 할당시키는 것이 좋습니다.
/// - stdlib.h 사용


int main()
{
	// 4 byte 동적 메모리를 할당시키고, 그 위치를 p 가 가리키도록 합니다.
	int* p = (int*)malloc(sizeof(int));
	/// - void* malloc(size) : size 바이트 만큼의 동적 메모리를 할당하고,
	///   할당시킨 메모리의 시작 위치를 반환합니다.

	// 동적 할당시킨 영역에 10을 할당합니다.
	(*p) = 10;
	printf("(*p) = %d \n", (*p));

	printf("before p = %p \n", p);

	// 동적 할당 시킨 메모리를 해제합니다.
	free(p);
	/// - 프로그래머의 실수를 줄이기 위하여 항상 동적 할당을 진행한 후에는
	///   free() 함수를 호출하여 해제하는 구문을 작성하는 것이 좋습니다.
	
	// 댕글링 포인터가 되지 못하도록 NULL 로 초기화합니다.
	p = NULL;

	//if (p != NULL)
	//{
	//	free(p);
	//}


	printf("after p = %p \n", p);

	return 0;
}