#include <stdio.h>

int main()
{
	char* str = "Hello World!";
	// ���ڿ��� Ư�� : �������� ������� �ʴ´�.
	// ���ڿ� �迭�� ����ϱ⺸�� �����͸� ����ϸ� �迭���� �޸��� �̵��� �ִ�.

	printf("%s\n", str);
	printf("%p\n", str);
	printf("%p\n", &str);

	return 0;
}

// ����

// �����͸� �̿��Ͽ� Swap�Լ��� �ۼ��մϴ�.
// Swap(int A, int B)
// -- input --
// A = 10, B = 20;
// -- output --
// A = 20, B = 10;