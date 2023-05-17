#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)


int main()
{
	char str[] = "Hello";

	char str2[256];

	//char str2[10];
	//str2[0] = 'H';

	// 문자열 복사 함수
	// strcpy(변수, 문자열);
	
	strcpy(str2, "Hello");
	//strcpy(str2, "Hello asdrasdrasrasrasrasdrasd");
	printf("%s\n", str2);

	printf("%d\n", sizeof(str2));

	// 문자열의 길이를 반환하는 함수
	// strlen(배열);
	printf("%d\n", strlen(str2));

	return 0;
}