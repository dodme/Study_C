#include <stdio.h>

// ������ �迭

int main()
{
	int arrNum[] = { 1, 2, 3, 4, 5 };
	int* pArr = arrNum;
	int* p = arrNum + 0;
	// �迭�� �ּ��̱⶧���� �ּҿ�����&�� ���� ����.

	// ���1.
	printf("%d\n", pArr[0]);
	printf("%d\n", pArr[1]);
	printf("%d\n", pArr[2]);
	printf("%d\n", pArr[3]);
	printf("%d\n\n\n\n", pArr[4]);
	//printf("%d\n", pArr[5]);

	
	// ���2.

	printf("%d\n", *(pArr + 0));
	printf("%d\n", *pArr + 1);
	printf("%d\n", *pArr + 2);
	printf("%d\n", *pArr + 3);

	//for(int i = 0; i < sizeof("�Ұ���~!!!!!"))


	return 0;
}