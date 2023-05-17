#pragma warning (disable : 4996)

#include <stdio.h>

#include <string.h>

int main()
{
	// 다음과 같은 방식은 사용할 수 있음
	int myArray1[5] = { 1, 2, 3, 4, 5 };

	// 하지만 다음과 같은 방식은 사용할 수 없음.
	int myArray2[5];
	// myArray2 = { 1, 2, 3, 4, 5 };

	// 다음과 같은 방식은 사용 가능
	char myString1[256] = "Hello World";

	// 다음과 같은 방식은 사용 불가능
	char myString2[256];
	//myString2 = "Hello World";

	// strcpy() : 문자열 복사
	char myString3[256];
	strcpy(myString3, "Hello World!");
	/// - strcpy(char * dest, const char * src)
	/// - src 의 문자열을 dest 로 복사합니다.

	printf("myString3 = %s \n", myString3);

	// strlen(str) : 문자열 str 의 길이를 확인합니다.
	printf("myString3 length = %d \n", strlen(myString3));

	// strcmp() : 두 개의 문자열을 서로 비교합니다.
	/// - 두 문자열이 동일하다면 0을 반환
	/// - 두 문자열이 동일하지 않다면 -1 이나 1 을 반환합니다.
	char myString4[256] = "Hello World";
	printf("myString3 == myString4 = %s \n", (strcmp(myString3, myString4) == 0 ? "TRUE" : "FALSE"));
	
	// strcat(str1, str2) :  두 문자열을 서로 잇습니다.
	/// - str1 += str2
	strcat(myString3, myString4);
	printf("myString3 += myString4 \n");
	printf("myString3 = %s \n", myString3);





	return 0;
}