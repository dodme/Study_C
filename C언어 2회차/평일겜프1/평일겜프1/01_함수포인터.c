#include <stdio.h>

// 함수포인터
/// > 함수를 담는 포인터

// 함수포인터 선언방식
/// > 반환형식 (*포인터변수이름)(매개변수 목록) = 참조할 함수;

void Sample()
{
	printf("재미땅^^\n");
}

void Sample2()
{
	printf("오늘 숙제있당~~\n");
}

int main()
{
	void (*pSample)(void) = Sample;

	pSample();

	pSample = Sample2;

	pSample();

	return 0;
}