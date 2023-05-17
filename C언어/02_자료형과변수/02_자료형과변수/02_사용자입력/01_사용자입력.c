#pragma warning (disable : 4996)
#include <stdio.h>

// 사용자 입력
/// - scanf(형식, &(주소연산자)변수) : 변수에 입력시킨 값을 저장합니다.

int main()
{
	// 입력 값을 저장할 변수 선언
	int myNumber;

	printf("숫자를 입력하세요 : ");

	// myNumber 에 입력시킨 정수를 저장합니다.
	scanf("%d", &myNumber);

	// 입력시킨 데이터를 출력합니다.
	printf("myNumber = %d \n", myNumber);

	int myVariable1;
	float myVariable2;

	printf("input int, float : ");
	scanf("%d %f", &myVariable1, &myVariable2);

	printf("myVariable1 = %d \n", myVariable1);
	printf("myVariable1 = %.4f \n", myVariable2);

	return 0;
}