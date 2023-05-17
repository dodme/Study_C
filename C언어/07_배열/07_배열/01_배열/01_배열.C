#include <stdio.h>

// 배열
/// - 동일한 타입의 변수를 모아놓은 데이터 집합

int main()
{
	// 비열을 선언합니다.
	int my_array1[5];

	// 배열의 각각의 요소에 10 ~ 50 까지의 값을 할당합니다.
	my_array1[0] = 10;
	my_array1[1] = 20;
	my_array1[2] = 30;
	my_array1[3] = 40;
	my_array1[4] = 50;
	
	// 배열이 사용하는 메모리의 크기를 조사합니다.
	printf("my_array1 size = %u size \n", sizeof(my_array1));

	// 배열 오소의 값들을 출력합니다.
	printf("my_array1[%d] = %d \n", 0, my_array1[0]);
	printf("my_array1[%d] = %d \n", 1, my_array1[1]);
	printf("my_array1[%d] = %d \n", 2, my_array1[2]);
	printf("my_array1[%d] = %d \n", 3, my_array1[3]);
	printf("my_array1[%d] = %d \n", 4, my_array1[4]);
	printf("\n");

	char my_array2[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	printf("my_array2 = %s \n", my_array2);

	char my_array3[] = "Hello!!";
	printf("my_array3 = %s \n", my_array3);
	
	

	return 0;
}