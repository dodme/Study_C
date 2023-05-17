
// 함수 포인터
/// - 호출할 함수를 가리키는 포인터 변수를 의미합니다.
/// - 형태가 같은 다양한 기능의 함수를 선택적으로 호출할 떄 사용됩니다.


#include <stdio.h>

int plus(int a, int b)
{
	return a + b;
}

int (*fn_plus)(int, int);
typedef int (*Plus)(int, int);
/// - typedef 을 통해 함수명이 아닌, 타입을 선언할 수도 있슴니다.

#define Action(fnName, paramTypes) void(*fnName)paramTypes
#define Func(retType, fnName, paramTypes) retType(*fnName)paramTypes

void print_hello()
{
	printf("hello! \n");
}

int main()
{
	// 함수 포인터 선언
	//void(*fn_print_hello)();
	//Func(void, fn_print_hello, ());
	Action(fn_print_hello, ());
	/// - 선언 방법
	/// 가리킬 함수의 반환 형식 (*함수포인터명)(매개변수타입);
	/// - 호출할 함수 바인딩 방법
	/// 함수포인터명 = 호출할 함수명;
	fn_print_hello = print_hello;

	// 함수 포인터가 가리키는 함수를 호출합니다.
	fn_print_hello();

	//fn_plus = plus;
	Plus fn_plus2 = plus;
	//printf("fn_plus(10, 20) = %d \n", fn_plus(10, 20));
	printf("fn_plus2(10, 20) = %d \n", fn_plus2(10, 20));


	return 0;
}