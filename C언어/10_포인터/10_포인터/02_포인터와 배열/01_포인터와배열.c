#include <stdio.h>

// 배열, 포인터 변수 차이
/// - 배열 : 가리키는 주소를 변경할 수 없다
///   sizeof() 연산자를 사용했을 때 배열 전체의 크기가 반환됩니다.
/// - 포인터 변수 : 가리키는 주소를 변경할 수 있다.
///   sizeof() 연산자를 사용했을 때 포인터 변수 크기가 반환됩니다.

int main()
{
	int myArray[5] = { 1, 2, 3, 4, 5 };

	int* pMyArray = myArray;
	int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);

	printf("sizeof(myArray) = %u \n", sizeof(myArray));
	printf("sizeof(pmyArray) = %u \n", sizeof(pMyArray));
	printf("myArrayLength = %d \n", myArrayLength);

	for (int i = 0; i < myArrayLength; ++i)
	{
		printf("pMyArray[%d] = %d \n", i, pMyArray[i]);
	}

	return 0;
}