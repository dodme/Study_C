#include <stdio.h>
#include <string.h>

// 문자열 배열
/// > 

// 문자열
/// > 

int main()
{
	// 방법 1.
	char str[] = { 'H', 'e', 'l', 'l', 'o' };

	for (int i = 0; i < (sizeof(str)); i++)
	{
		printf("%c", str[i]);
	}

	printf("\n\n");

	// 방법 2.
	char str2[] = "Hello";
	// \0 == null 문자 : 문자열의 끝에는 항상 null문자가 존재한다
	printf("%s\n", str2);

	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof(str2));

	return 0;
}