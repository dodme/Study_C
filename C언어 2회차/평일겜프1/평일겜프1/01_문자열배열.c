#include <stdio.h>
#include <string.h>

// ���ڿ� �迭
/// > 

// ���ڿ�
/// > 

int main()
{
	// ��� 1.
	char str[] = { 'H', 'e', 'l', 'l', 'o' };

	for (int i = 0; i < (sizeof(str)); i++)
	{
		printf("%c", str[i]);
	}

	printf("\n\n");

	// ��� 2.
	char str2[] = "Hello";
	// \0 == null ���� : ���ڿ��� ������ �׻� null���ڰ� �����Ѵ�
	printf("%s\n", str2);

	printf("%d\n", sizeof(str));
	printf("%d\n", sizeof(str2));

	return 0;
}