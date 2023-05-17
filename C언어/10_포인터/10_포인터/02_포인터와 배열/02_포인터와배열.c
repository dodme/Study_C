#include <stdio.h>

int main()
{
	// 주소와 정수간의 연산
	/// (주소 + i) = (주소 + (i X sizeof(가리키는 변수 자료형)))

	int myArray[5] = { 1, 2, 3, 4, 5 };
	int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);
	int* pMyArray = myArray;

	for (int i = 0; i < myArrayLength; ++i)
	{
		printf("pMyArray[%d] = %d \n", i, &pMyArray[i]);
	}

	printf("\n");
	for (int i = 0; i < myArrayLength; ++i)
	{
		printf("(myArray + %d) = (myArray + (%d x sizeof(int))) = %p \n", i, i, &myArray[i]);
	}

	return 0;
}