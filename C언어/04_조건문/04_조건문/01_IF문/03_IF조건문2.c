#include <stdio.h>
#pragma warning ( disable : 4996 )

int main()
{
	// ���� �ӱ�
	const int RATE = 8720;

	// ���� �ð�, �ӱ�
	int hours, pay;

	printf("ö���� ���� �ð��� �Է��ϼ��� :");
	scanf("%d", &hours);

	if (hours >= 20)
	{
		printf("ö���� 20�ð� �̻��� ���� �� �����ϴ�. \n");
	}
	// 8 �ð��� �ʰ��� ���
	else if (hours > 8)
			pay = (int)((RATE * 8) + (RATE * 1.5f * (hours - 8)));

	// 8�ð��� �ʰ����� ���� ���
	else pay = (RATE * hours);

	if(hours<20)
		printf("ö���� �ӱ��� %d �� �Դϴ�. \n", pay);

	return 0;
}