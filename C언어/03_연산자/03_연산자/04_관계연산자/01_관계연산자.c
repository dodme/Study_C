#include <stdio.h>

//관계연산자
/// - 두 피연산자 사이의 관계를 확인하는 연산자
/// A == B			: A 와 B 가 같을 경우 참을 반환합니다.
/// A != B			: A 와 B 가 다를 경우 참을 반환합니다.
/// A > B, A < B	: A 와 B 의 크기를 비교하며, 초과와 미만을 나타냅니다.
/// A >= B, A <= B	: A 와 B 의 크기를 비교하며, 이상과 이하를 나타냅니다.

// C 언어에서 참과 거짓은 1, 0 으로 나타냅니다. 

int main()
{
	int var1 = 10;
	int var2 = 20;

	printf("(var1 == var2) = %d \n", (var1 == var2));
	printf("(var1 != var2) = %d \n", (var1 != var2));
	printf("(var1 > var2) = %d \n", (var1 > var2));
	printf("(var1 <= var2) = %d \n", (var1 <= var2));



	return 0;
}