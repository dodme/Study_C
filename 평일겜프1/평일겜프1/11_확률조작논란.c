#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>



typedef enum
{
	������,
	��������,
	������ü
}ItemName;

typedef struct
{
	ItemName itemName;
	int itemAtk;
}Item;

int Random(int maxValue)
{
	return rand() % maxValue;
}


int main()
{
	srand(GetTickCount64());

	int itemDrop = 100;
	itemDrop = Random(itemDrop);

	if (itemDrop >= 70)
	{
		
		int itemRate = 1000;
		itemRate = Random(itemRate);
		Item item;
		
		if (itemRate < 1)
		{
			item.itemName = ������ü;
			item.itemAtk = 100;
		}
		else if (itemRate < 500)
		{
			item.itemName = ������;
			item.itemAtk = 5;
		}
		else if (itemRate <= 1000)
		{
			item.itemName = ��������;
			item.itemAtk = 3;
		}
		

		switch (item.itemName)
		{
		case 0:
			printf("�������� ȹ���߽��ϴ�.\n");
			printf("���ݷ� : %d\n", item.itemAtk);
			break;
		case 1:
			printf("�������и� ȹ���߽��ϴ�.\n");
			printf("���ݷ� : %d\n", item.itemAtk);
			break;
		case 2:
			printf("������ü�� ȹ���߽��ϴ�.\n");
			printf("���ݷ� : %d\n", item.itemAtk);
			break;
		}
	}
	else
	{
		printf("�ƹ� �����۵� ȹ������ ���߽��ϴ�.\n");
	}
	

	return 0;
}