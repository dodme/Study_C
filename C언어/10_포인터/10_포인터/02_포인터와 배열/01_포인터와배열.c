#include <stdio.h>

// �迭, ������ ���� ����
/// - �迭 : ����Ű�� �ּҸ� ������ �� ����
///   sizeof() �����ڸ� ������� �� �迭 ��ü�� ũ�Ⱑ ��ȯ�˴ϴ�.
/// - ������ ���� : ����Ű�� �ּҸ� ������ �� �ִ�.
///   sizeof() �����ڸ� ������� �� ������ ���� ũ�Ⱑ ��ȯ�˴ϴ�.

int main()
{
	int myArray[5] = { 1, 2, 3, 4, 5 };

	int* pMyArray = myArray;
	int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);

	printf("sizeof(myArray) = %u \n", sizeof(myArray));
	printf("sizeof(pmyArray) = %u \n", sizeof(pMyArray));
	printf("myArrayLength = %d \n", myArrayLength);

	for (int i = 0; i < myArrayLength; ++i)
	{
		printf("pMyArray[%d] = %d \n", i, pMyArray[i]);
	}

	return 0;
}