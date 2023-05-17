#include <stdio.h>

int main()
{
	char* str = "Hello World!";
	// 문자열의 특성 : 역참조를 사용하지 않는다.
	// 문자열 배열을 사용하기보다 포인터를 사용하면 배열보다 메모리의 이득이 있다.

	printf("%s\n", str);
	printf("%p\n", str);
	printf("%p\n", &str);

	return 0;
}

// 숙제

// 포인터를 이용하여 Swap함수를 작성합니다.
// Swap(int A, int B)
// -- input --
// A = 10, B = 20;
// -- output --
// A = 20, B = 10;