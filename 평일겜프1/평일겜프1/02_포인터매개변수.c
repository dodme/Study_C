#include <stdio.h>

// 배열의 모든 요소를 0으로 초기화 하는 유틸함수를 작성합니다.

void Reset(int* pArr, int length)
{
	for (int i = 0; i < length; i++)
	{
		*(pArr + i) = 0;
		// pArr[i] = 0;
	}
}

void PrintArray(int* pArr, int length) // int* pArr = int pArr[]
{
	for (int i = 0; i < length; i++)
	{
		printf("arr[%d] = %d\n", i, pArr[i]);
	}
}

int main()
{
	int arrNum[] = { 1, 2, 3, 4, 5, 6 };
	int length = sizeof(arrNum) / sizeof(arrNum[0]);

	Reset(arrNum, length);

	PrintArray(arrNum, length); // 0

	return 0;
}