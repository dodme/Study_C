#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 전달한 문자열을 소문자로 변환하여 반환하는 함수,
// 전달한 문자열을 대문자로 변환하여 반환하는 함수,
// 전달한 문자열에서 소문자의 개수를 반환하는 함수,
// 전달한 문자열에서 대문자의 개수를 반환하는 함수를 작성하여
// 다음과 같이 작동하는 프로그램을 완성하시오
/// - ASCII Code 표 참고


// input
// 입력 : Hello World!

// output
/// 소문자로 출력 : hello world!
/// 대문자로 출력 : HELLO WORLD!
/// 소문자 개수 : 8
/// 대문자 개수 : 2

#define UPPERSTART	65
#define UPPEREND	90

#define LOWERSTART	97
#define LOWEREND	122

#define isUpper(c) (UPPERSTART <= (c) && (c) <= UPPEREND)
#define isLower(c) (LOWERSTART <= (c) && (c) <= LOWEREND)

#define toUpper(c) ((c) - (LOWERSTART - UPPERSTART))
#define toLower(c) ((c) + (LOWERSTART - UPPERSTART))

const char* to_lower_case(const char str[], char buf[])
{
	strcpy(buf, str);

	for (int i = 0; i < strlen(buf); ++i)
	{
		if (isUpper(buf[i]))
			buf[i] = toLower(buf[i]);
	}

	return buf;
}

const char* to_upper_case(const char str[], char buf[])
{
	strcpy(buf, str);

	for (int i = 0; i < strlen(buf); ++i)
	{
		if (isLower(buf[i]))
			buf[i] = toUpper(buf[i]);
	}

	return buf;
}

int get_lower_number(const char str[])
{
	int number = 0;

	for (int i = 0; i < strlen(str); ++i)
	{
		if (isLower(str[i]))
			++number;
	}

	return number;
}

int get_upper_nubmer(const char str[])
{
	int number = 0;
	for (int i = 0; i < strlen(str); ++i)
		if (isUpper(str[i])) ++number;

	return number;
}

int main()
{
	printf("입력 : ");
	char input[256];
	scanf("%[^\n]s", input);

	char buf[256];

	printf("소문자 출력 : %s \n", to_lower_case(input, buf));
	printf("대문자 출력 : %s \n", to_upper_case(input, buf));
	printf("소문자 개수 : %d \n", to_lower_number(input));
	printf("대문자 개수 : %d \n", to_upper_number(input));

	return 0;
}