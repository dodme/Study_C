#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	// ���� �ð��� ���� ����
	int time = 0;
	// �����ñ�
	int pay = 8720;
	
	printf("ö���� ���� �ð��� �Է��ϼ���\n");
	scanf("%d", &time);

	if (time <= 24 && time >= 0)
	{
		if (time <= 8)
			printf("ö���� ���� ���� %d�� �Դϴ�.\n", (pay * time));
		else
		{
			printf("ö���� ���� ���� %d�� �Դϴ�.\n",
				(pay * 8) + ((int)(pay * 1.5f) * (time - 8)));
		}
	}
	else
		printf("0 ~ 24 ������ ���ڸ� �Է����ּ���.\n");
	
	return 0;
}