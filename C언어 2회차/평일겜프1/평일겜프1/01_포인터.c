#include <stdio.h>

// ������
/// �ٸ� �޸��� �ּҰ��� ����Ű�� ������

// ������ ����
/// �ּҸ� ��� ����

int main()
{
	int num = 10;
	int* pNum = &num; // * : ������ ������ / ����������

	*pNum = 20; // * : ������������

	printf("%d\n", num);
	printf("%d\n", *pNum);


	return 0;
}