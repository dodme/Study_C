#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)


int main()
{
	char str[] = "Hello";

	char str2[256];

	//char str2[10];
	//str2[0] = 'H';

	// ���ڿ� ���� �Լ�
	// strcpy(����, ���ڿ�);
	
	strcpy(str2, "Hello");
	//strcpy(str2, "Hello asdrasdrasrasrasrasdrasd");
	printf("%s\n", str2);

	printf("%d\n", sizeof(str2));

	// ���ڿ��� ���̸� ��ȯ�ϴ� �Լ�
	// strlen(�迭);
	printf("%d\n", strlen(str2));

	return 0;
}