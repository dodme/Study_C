#include <stdio.h>

// 서식지정자
/// - 데이터 형식에 맞게 표현할 수 있도록 도와주는 문자
/// - %d	- 32 비트 이하 10 진수 정수 형식
/// - %lld	- 64 비트 10 진수 정수 형식
/// - %u	- 부호 없는 32 비트 이하 10 진수 정수 형식
/// - %llu	- 부호 없는 64 비트 10 진수 정수 형식
/// - %x	- a ~ f 를 사용하는 16 진수
/// - %X	- A ~ F 를 사용하는 16 진수
/// - %f	- 실수형식
/// - %c	- 문자형식
/// - %s	- 문자열형식
/// - %p	- 메모리 시작 

int main()
{
	printf("정수 출력 : %d \n", 10);
	printf("16 진수 출력 : %X \n", 10);
	printf("문자 출력 : %c \n", 'A');
	// 문자 데이터에는 작은 따옴표를 사용합니다.
	/// ex) 'A'
	printf("문자열 출력 : %s \n", "Hello World!");
	// 문자열 데이터에는 큰 따옴표를 사용합니다.
	/// ex) "Hello World!"
	printf("%d %c %d %c %d \n", 10, '+', 20, '=', 30);
	

	return 0;
}

// 문제
// printf() 함수를 이용하여 다음과 같은 결과를 출력해보세요!
/// - 조건 : @@@ 에 자신의 이름을 넣어 출력해보세요.
/// output__
/// - 나는 @@@ 입니다.