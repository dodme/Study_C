#include <stdio.h>

// 자료구조
/// > 메모리를 효율적으로 관리하기위한 구조

// 배열 << 자료구조 Data Structure

int main()
{
	// 배열을 초기화하는 방법1.
	int arrNum1[3] = { 10, 20, 30 };
	printf("%d\n", arrNum1[0]);

	// 방법2.
	int arrNum2[3];
	arrNum2[0] = 10;
	arrNum2[1] = 20;
	arrNum2[2] = 30;
	printf("%d\n", arrNum2[0]);

	// 방볍3.
	int arrNum3[] = { 10, 20, 30, 40, 50 };
	// 단1
	// int arrNum4[]; X

	printf("%d\n", arrNum3[0]);


	return 0;
}