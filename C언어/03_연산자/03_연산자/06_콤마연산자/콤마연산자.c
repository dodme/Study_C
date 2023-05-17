#include <stdio.h>

// 콤마 연산자
/// - 왼쪽부터 오른쪽으로 차례로 연산을 수행하며
/// - 가장 오른쪽의 피연산자가 최종 결과값이 되는 연산자

int main()
{
	int var1 = 10,
		var2 = 20,
		var3 = 30,
		res;

	res = (++var1, ++var2, --var3);
	/// - 콤마 연산자는 꼭 괄호를 함께 사용해야 합니다.

	printf("var1 = %d \n", var1);
	printf("var2 = %d \n", var2);
	printf("var3 = %d \n", var3);
	printf("res = %d \n", res);

	return 0;
}