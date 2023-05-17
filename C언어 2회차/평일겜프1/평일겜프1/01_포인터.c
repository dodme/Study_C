#include <stdio.h>

// 포인터
/// 다른 메모리의 주소값을 가리키는 연산자

// 포인터 변수
/// 주소를 담는 변수

int main()
{
	int num = 10;
	int* pNum = &num; // * : 포인터 연산자 / 참조연산자

	*pNum = 20; // * : 역참조연산자

	printf("%d\n", num);
	printf("%d\n", *pNum);


	return 0;
}