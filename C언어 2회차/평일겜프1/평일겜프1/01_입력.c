#pragma warning (disable : 4996)
#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS

// 입력
/// > 변수에 정해진 값이 아닌 사용자가 값을 초기화 하는것

int main()
{
	int inputNum = 0;
	int inputNum2 = 0;

	printf("정수를 입력해주세요~! \n");
	// 입력표준함수
	scanf("%d %d", &inputNum, &inputNum2);

	printf("당신이 입력한 값은 : %d 입니다. \n", inputNum);
	printf("당신이 입력한 값은 : %d 입니다. \n", inputNum2);


	return 0;
}