#include <stdio.h>
#include <stdarg.h>

// 가변 인자
/// - 함수에 전달되는 인자의 개수가 변하는 것을 의미합니다.

// 가변 인자를 사용하는 함수 정의 방법
// 반환형식 함수명 (고정 매개 변수, ...) { code }

void print_numbers(int argc, ...)
{
	// 가변 인수들의 시작 위치를 저장할 포인터 변수를 선언합니다.
	va_list argsPointer;

	// 포인터 변수 argsPointer 가 가리키는 주소를 가변 인수의 시작 위치로 설정합니다.
	va_start(argsPointer, argc);
	/// - ap : 함수에 전달된 가변 인수들을 읽을 포인터 변수를 전달합니다.
	/// - x  : 마지막 고정 인수를 전달합니다.

	for (int i = 0; i < argc; ++i)
	{
		// argsPointer 가 현재 가리키는 위치의 인수를 읽고,
		// 다음 인수의 메모리 시작 위치를 가리키도록 합니다.
		int value = va_arg(argsPointer, int);
		/// - ap : 가변 인수들을 읽을 포인터 변수를 전달합니다.
		/// - t  : 읽을 인수의 타입을 전달합니다.
	
		printf("value = %d \n", value);
	}

	// 가변 인수 사용을 위해 사용된 메모리를 정리합니다.
	va_end(argsPointer);
	// - ap : 가변 인수 위치를 읽을 때 사용했던 포인터 변수를 전달합니다.
}

int main()
{
	print_numbers(2, 10, 20);
	printf("\n");

	print_numbers(5, 40, 50, 60, 70, 80);
	printf("\n");

	return 0;
}