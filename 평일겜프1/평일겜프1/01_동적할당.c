#include <stdio.h>
#include <stdlib.h>

// �����Ҵ� // �޸𸮴��� ����!
/// > �����ڰ� ���ϴ� ������ �޸𸮸� �Ҵ�ް�, ���ϴ� ������ ���������� �޸�
/// > �ݵ�� �޸� ������ ������Ѵ�
// �����Ҵ� : malloc(), calloc(), realloc()
// ���� : free()

// new, delete

// ��۸� ������?
/// ������ �޸𸮸� ������ ����Ű���ִ� �޸�

// �����Ҵ�
/// > ���α׷��� �����Ҷ����� ���������� �����ִ� �޸�

int main()
{
	int* p = (int*)malloc(sizeof(int));
	//int* p = (int*)calloc(3, sizeof(int));

	*p = 10;
	//p = (int*)realloc(10, sizeof(int));

	printf("%d", *p);
	
	free(p);

	p = NULL; // ��۸� ������ �ʱ�ȭ

	printf("%d", *p);

	*p = 20;

	printf("%d", *p);
	return 0;
}