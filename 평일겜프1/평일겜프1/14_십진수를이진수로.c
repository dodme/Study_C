#include <stdio.h>
#pragma warning (disable : 4996)

// 10������ ���� 2������ ����ϼ���.

// 10 -> 1010
// 20 -> 10100

int main()
{
	//2����
	int eeJinSu[256];
	//10����
	int tenJinSu = 0;
	//�迭������ ���� ����
	int count = 0;

	printf("2������ ������ 10������ �Է��ϼ���.\n");
	scanf("%d", &tenJinSu);

	while (1)
	{
		if ((tenJinSu == 1) || (tenJinSu == 0))
		{
			eeJinSu[count] = (tenJinSu % 2);
			break;
		}
		eeJinSu[count] = (tenJinSu % 2);
		tenJinSu /= 2;
		count++;

	}
	
	for (int i = count; i >= 0; i--)
	{
		printf("%d", eeJinSu[i]);
	}

	
	return 0;
}