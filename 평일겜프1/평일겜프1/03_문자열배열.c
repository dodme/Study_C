#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

// 문자열 입력

int main()
{
	char inputStr[256];
	printf("당신의 이름을 입력하세요~~\n");
	// scanf("%s", inputStr);

	// gets() : 문자열을 입력받는 함수, 문자열 외에 다른것은 입력받지 못한다
	// gets(inputStr);

	int inputNum[80];
	gets(inputNum);


	printf("%s\n", inputStr);



	return 0;
}