#include <stdio.h>
#pragma warning (disable : 4996)


int main()
{
	// Ȧ��¦��
	/*unsigned int inputNum = 0;
	printf("Enter The Integer..\n");

	scanf("%u", &inputNum);

	if (inputNum > 0)
	{
		if (inputNum % 2 == 0)
		{
			printf("¦��\n");
		}
		else if (inputNum % 2 == 1)
		{
			printf("Ȧ��\n");
		}

	}*/

	// �������
	/*int inputNum = 0;
	printf("Enter The Integer..\n");

	scanf("%d", &inputNum);

	if (inputNum > 0)
	{
		printf("���\n");
	}
	else if (inputNum == 0)
	{
		printf("0\n");
	}
	else if (inputNum < 0)
	{
		printf("����\n");
	}*/
	
	//ö���� �ӱ�
	int workTime = 0;
	int pay = 8720;
	printf("���� �ð���?\n");
	scanf("%d", &workTime);

	if (workTime > 8)
	{
		workTime -= 8;
		printf("ö���� ���� �ð��� %f�Դϴ�.", (pay * 8) + (workTime * (pay * 1.5f)));
	}
	else if (workTime <= 8)
	{
		printf("ö���� ���� �ð��� %d�Դϴ�.", pay * workTime);
	}





	return 0;
}