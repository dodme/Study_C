#include <stdio.h>

// �迭�� ��Ҹ� 1 ~ 10������ ���� �ʱ�ȭ

int main()
{
	//int arrNum[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int arrNum[10];
	// sizeof(int) == sizeof(arrNum[0])
	// sizeof(���ϰ��� �ϴ� �޸�) : return �޸��� ũ��

	for (int i = 0; i < (sizeof(arrNum) / sizeof(arrNum[0])); i++)
	{
		arrNum[i] = i + 1;
		printf("arrNum[%d] : %d\n", i, arrNum[i]);
	}


	return 0;
}



// ����
/// 31 ~ 60�� �迭�� ���
/// 31 ~ 60 �� ����ϼ���! 





