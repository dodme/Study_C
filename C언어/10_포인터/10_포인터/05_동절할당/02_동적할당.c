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
	printf("�� ���� ��Ҹ� �߰��ұ�� ? ");
	int elemcount;
	scanf("%d", &elemcount);

	//int* my_array = (int*)malloc(sizeof(int) * elemcount);
	int* my_array = (int*)calloc(elemcount, sizeof(int));
	// - void * calloc(count,size) : count * size ��ŭ�� ���� �޸𸮸� �Ҵ��Ű��,
	//   �Ҵ��Ų �޸��� ���� 0���� �ʱ�ȭ�մϴ�.
	//   �׸��� �� �޸��� ���� ��ġ�� ��ȯ�մϴ�.

	print_elems(my_array, elemcount);

	if (my_array)
	{
		free(my_array);
		my_array = NULL;
	}

	return 0;
}