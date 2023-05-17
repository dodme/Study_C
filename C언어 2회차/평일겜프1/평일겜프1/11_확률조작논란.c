#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>



typedef enum
{
	도란검,
	도란방패,
	삼위일체
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
			item.itemName = 삼위일체;
			item.itemAtk = 100;
		}
		else if (itemRate < 500)
		{
			item.itemName = 도란검;
			item.itemAtk = 5;
		}
		else if (itemRate <= 1000)
		{
			item.itemName = 도란방패;
			item.itemAtk = 3;
		}
		

		switch (item.itemName)
		{
		case 0:
			printf("도란검을 획득했습니다.\n");
			printf("공격력 : %d\n", item.itemAtk);
			break;
		case 1:
			printf("도란방패를 획득했습니다.\n");
			printf("공격력 : %d\n", item.itemAtk);
			break;
		case 2:
			printf("삼위일체를 획득했습니다.\n");
			printf("공격력 : %d\n", item.itemAtk);
			break;
		}
	}
	else
	{
		printf("아무 아이템도 획득하지 못했습니다.\n");
	}
	

	return 0;
}