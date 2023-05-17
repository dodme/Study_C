#include <stdio.h>

// static
/// - 정적 변수, 정적 함수를 작성합니다.

void add_number(int add);


int main()
{
	add_number(10);
	add_number(20);
	add_number(30);


	return 0;
}

void add_number(int add)
{
	// 정적 변수
	static int value = 0;
	/// - 데이터 영역에 할당됩니다.
	
	
	value += add;
	printf("value = %d \n", value);
}