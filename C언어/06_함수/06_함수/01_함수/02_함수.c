#include <stdio.h>

// 반환형식이 void가 아닌 함수
/// - return 문을 통해 항상 어떠한 값일 반환해야 합니다.

// return 문
/// - 함수의 실행흘 종료하고, 프로그램의 흐름을 함수 호출자에게 돌려놓습니다.
/// - 반환 형식이 void 가 아닌 함수는 [return 값;] 구문을 통해
///   특정한 값을 반환시킬 수 있습니다.


// get_lucky_number() 함수를 정의합니다.
int get_lucky_number()
{
	// 7 이라는 값을 반환시킵니다.
	return 7;
}

int main()
{
	// function_return_value 에 get_lucky_number() 함수의 반환 값을 입력합니다.
	int function_return_value = get_lucky_number();

	printf("function_return_value = %d \n", function_return_value);

	return 0;
}