#include <stdio.h>

// 단항연산자
/// - 피연산자가 1개인 연산자
/// - 증가 연산자와 감소 연산자를 사용할 수 있습니다.
/// - 경우에 따라 전위 연산자, 후위 연산자로 나눠 사용할 수 있습니다.


int main()
{
	int count = 0;
	// 증가 연산자 [++]
	/// - 피연산자의 값을 1 증가시킵니다.
	++count;
	printf("count = %d \n", count);

	// 감소 연산자 [--]
	/// - 피연산자의 값을 1 감소시킵니다.
	--count;
	printf("count = %d \n", count);

	// 전위 연산자
	/// - 연산자를 변수 앞에 사용합니다.
	/// - 연산 후의 결과를 반환합니다.
	printf("++count = %d \n", ++count);

	// 후위 연산자
	/// - 연산자를 변수 뒤에 사용합니다.
	/// - 연산 전의 결과를 반환합니다.
	printf("count++ = %d \n", count++);
	printf("count = %d \n", count);

	return 0;
}