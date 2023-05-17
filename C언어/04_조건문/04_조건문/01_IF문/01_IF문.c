#include <stdio.h>

// 분기문
/// - 프로그램의 흐름을 조건에 따라 여러 갈래로 나누는 흐름 제어 구문

int main()
{
	// if 문
	// if (조건식) 조건식이 참일 경우 실행할 구문;
	

	// if 문은 다음에 오는 단 하나의 구문만을 조건식의 결과에 따라 실행합니다.
	if (1) printf("조건식이 참입니다. \n");
	if (0) printf("조건식이 참입니다. \n");
	printf("if end \n");

	// 여러 구문을 코드 블록으로 묶어 하나의 구문으로 만듭니다.
	if(1)
	{
		printf("if 문 조건식이");
		printf(" 참입니다. \n");
	}
	if (0)
	{
		printf("if 문 조건식이");
		printf(" 참입니다. \n");
	}

	// else
	/// - 위 if 문 조건식이 거짓일 경우를 나타냅니다.
	else printf("위 if 문 조건식이 거짓입니다. \n");

	int number = 10;
	if (number == 10) printf("number 의 값은 10입니다. \n");
	// if (nubmer != 10) pirntf("number 의 값은 10이 아닙니다. \n");
	else printf("number 의 값은 10이 아닙니다. \n");



	return 0;
}