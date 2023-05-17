#include <stdio.h>

// 관계연산자
/// > < >= <= == !=
/// > 연산결과 : 진리값 / 논리값
/// > true / false => 1 / 0

int main()
{
	int A = 10;
	int B = 20;

	printf("> : %d\n", A > B);
	printf("< : %d\n", A < B);
	printf(">= : %d\n", A >= B);
	printf("<= : %d\n", A <= B);
	printf("== : %d\n", A == B);
	printf("!= : %d\n", A != B);


	return 0;
}