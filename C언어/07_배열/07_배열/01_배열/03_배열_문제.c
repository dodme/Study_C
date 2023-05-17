// 배열의 각 요소에 1 ~ 100까지의 데이터를 할당하여
// 배열의 요소에 입력된 값을 모두 출력해보세요.

#include <stdio.h>

int main()
{
	// 배열 선언
	int my_array[100];

	// 배열 길이
	// int length = sizeof(my_array) / sizeof(my_array[0]);
	int length = sizeof(my_array) / sizeof(int);

	// 각 요소에 데이터를 할당합니다.
	for (int i = 0; i < length; ++i)
		my_array[i] = i + 1;

	// 각 요소에 할당된 데이터를 출력합니다.
	for (int i = 0; i < length; ++i)
		printf("my_array[%d] = %d \n", i, my_array[i]);

	/*for (int i = 0; i < 100; ++i)
	{
		array_num[i] = i + 1;
	}

	for (int j = 0; j < 100; ++j)
	{
		printf("array_num[%d] = %d \n", j, array_num[j]);
	}*/

	return 0;
}