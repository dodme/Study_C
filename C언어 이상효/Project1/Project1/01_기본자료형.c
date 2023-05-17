#include <stdio.h>

// 자료형? 데이터 형식?

/// > 정수형식				Byte		담을 수 있는 값의 범위
// short			:		2byte		:  -32768 ~ 32767
// int	자주사용	:		4byte		:  -21억 ~ 21억
// long				:		8byte		:  -922경 ~ 922경

/// > 실수형식
// float  자주사용	:		4byte 		:  -21억 ~ 21억     소숫점 6번째자리
// double 자주사용	:		8byte 		:  -922경 ~ 922경   소숫점 15번째자리

/// > 문자형식
// char				:		1byte		:  -127 ~ 128
// 아스키코드 : A 65  a 97


int main()
{
	// 변수의 선언

	// 정수형식 변수
	int number;

	// 변수의 초기화
	number = 10;
	// = : 대입연산자

	printf("number = %d \n", number);

	// 실수형식 변수
	// 선언과 동시에 초기화
	float fnum = 3.14f;

	printf("fnum = %.2f \n", fnum);

	char c = 'a';
	printf("%c \n", c);
	char c2 = 97;
	printf("%d \n", c2);
	printf("%c \n", c2);



	return 0;
}