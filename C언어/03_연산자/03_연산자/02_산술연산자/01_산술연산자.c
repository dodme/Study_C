
// 산술연산자
/// - 수치 형식의 데이터를 다루는 연산자
/// - 수치 형식 : 정수, 부동 소수점 형식
/// + : 덧셈 연산자
/// - : 뺼셈 연산자
/// * : 곱셈 연산자
/// / : 나눗셈 연산자
/// % : 나머지 연산자
 


#include <stdio.h>

int main()
{
	int my_int1 = 3;
	int my_int2 = 2;

	double addition			= my_int1 + my_int2;
	double subtraction		= my_int1 - my_int2;
	double multiplication	= my_int1 * my_int2;
	double division			= my_int1 / my_int2;
	double remainder		= my_int1 % my_int2;

	division = (double)my_int1 / my_int2;
	division = my_int1 / (double)my_int2;
	division = (double)my_int1 / (double)my_int2;

	printf("addition		= %.2f \n", addition);
	printf("subtraction		= %.2f \n", subtraction);
	printf("multiplication	= %.2f \n", multiplication);
	printf("division		= %.2f \n", division);
	printf("remainder		= %.2f \n", remainder);



	return 0;
}