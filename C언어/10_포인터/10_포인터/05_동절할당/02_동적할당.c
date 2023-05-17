#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

void print_elems(const int* array, int elem_count)
{
	for (int i = 0; i < elem_count; ++i)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}

int main()
{
	printf("몇 개의 요소를 추가할까요 ? ");
	int elemcount;
	scanf("%d", &elemcount);

	//int* my_array = (int*)malloc(sizeof(int) * elemcount);
	int* my_array = (int*)calloc(elemcount, sizeof(int));
	// - void * calloc(count,size) : count * size 만큼의 동적 메모리를 할당시키고,
	//   할당시킨 메모리의 값을 0으로 초기화합니다.
	//   그리고 그 메모리의 시작 위치를 반환합니다.

	print_elems(my_array, elemcount);

	if (my_array)
	{
		free(my_array);
		my_array = NULL;
	}

	return 0;
}