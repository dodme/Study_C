#include <stdio.h>

// �Լ�������
/// > �Լ��� ��� ������

// �Լ������� ������
/// > ��ȯ���� (*�����ͺ����̸�)(�Ű����� ���) = ������ �Լ�;

void Sample()
{
	printf("��̶�^^\n");
}

void Sample2()
{
	printf("���� �����ִ�~~\n");
}

int main()
{
	void (*pSample)(void) = Sample;

	pSample();

	pSample = Sample2;

	pSample();

	return 0;
}