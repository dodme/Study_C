#include <stdio.h>

// 함수
/// - 일련의 코드를 하나의 이름 아래 묶은 것

// 함수 정의 방법
/// 반환형식 함수명(매개 변수 목록)
/// {
///		함수를 호출했을 때 실행될 구문;
/// }

// 사용될 함수를 선언합니다.
void print_hello();

int main()
{
	// 함수를 호출합니다.
	print_hello();

	return 0;
}

// print_hello() 함수를 정의합니다.
void print_hello()
{
	// void : printf_hello() 함수의 반환값이 존재하지 않는다는 것을 의미합니다.
	// - 보통 묶은 코드를 실행만 할 때 사용됩니다.
	printf("Hello! \n");



}
