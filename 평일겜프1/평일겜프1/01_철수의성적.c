#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	// unsigned : ��ȣ���� �ڷ���

	unsigned int kor = 0, eng = 0, math = 0;

	printf("ö���� �����, �����, ���м����� ���� �Է��ϼ���.\n");
	scanf("%u %u %u", &kor, &eng, &math);

	printf("���� : %u\n���� : %u\n���� : %u\n", kor, eng, math);



	return 0;
}