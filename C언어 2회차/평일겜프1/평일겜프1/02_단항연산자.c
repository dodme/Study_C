#include <stdio.h>

// 단항연산자
/// > 자기자신에 오로지 1을 연산하는 연산자
/// > 전위 : 변수++ 변수--
/// > 후위 : ++변수 --변수

// 항
///

int main()
{
	int num = 10;
	num++;
	// num = num + 1;

	num--;
	// num = num - 1;

	printf("%d", num);


	return 0;
}