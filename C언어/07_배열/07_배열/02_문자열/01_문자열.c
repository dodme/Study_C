#pragma warning (disable : 4996)

#include <stdio.h>

#include <string.h>

int main()
{
	// ������ ���� ����� ����� �� ����
	int myArray1[5] = { 1, 2, 3, 4, 5 };

	// ������ ������ ���� ����� ����� �� ����.
	int myArray2[5];
	// myArray2 = { 1, 2, 3, 4, 5 };

	// ������ ���� ����� ��� ����
	char myString1[256] = "Hello World";

	// ������ ���� ����� ��� �Ұ���
	char myString2[256];
	//myString2 = "Hello World";

	// strcpy() : ���ڿ� ����
	char myString3[256];
	strcpy(myString3, "Hello World!");
	/// - strcpy(char * dest, const char * src)
	/// - src �� ���ڿ��� dest �� �����մϴ�.

	printf("myString3 = %s \n", myString3);

	// strlen(str) : ���ڿ� str �� ���̸� Ȯ���մϴ�.
	printf("myString3 length = %d \n", strlen(myString3));

	// strcmp() : �� ���� ���ڿ��� ���� ���մϴ�.
	/// - �� ���ڿ��� �����ϴٸ� 0�� ��ȯ
	/// - �� ���ڿ��� �������� �ʴٸ� -1 �̳� 1 �� ��ȯ�մϴ�.
	char myString4[256] = "Hello World";
	printf("myString3 == myString4 = %s \n", (strcmp(myString3, myString4) == 0 ? "TRUE" : "FALSE"));
	
	// strcat(str1, str2) :  �� ���ڿ��� ���� �ս��ϴ�.
	/// - str1 += str2
	strcat(myString3, myString4);
	printf("myString3 += myString4 \n");
	printf("myString3 = %s \n", myString3);





	return 0;
}