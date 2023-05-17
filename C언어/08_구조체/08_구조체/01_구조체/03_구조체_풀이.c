#pragma warning (disable : 4996)

#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct tag_item
{
	// 아이템의 이름
	char name[256];

	// 아이템 설명
	char description[256];
} Item;

Item initialize_item_info()
{
	Item newItem;
	printf("추가시킬 아이템의 이름을 입력하시오 : ");
	scanf("%[^\n]s", newItem.name);

	// 입력 버퍼에 남아있는 개행 문자 제거
	while (getchar() != '\n');

	printf("%s 의 설명을 입력하시오 : ", newItem.name);
	scanf("%[^\n]s", newItem.description);

	// 입력 버퍼에 남아있는 개행 문자 제거
	while (getchar() != '\n');

	// 콘솔창 비우기
	system("cls");

	// 이름 / 설명을 입력시킨 후 그 데이터를 갖는 변수 반환
	return newItem;
}

// 아이템 정보를 출력하는 함수
void print_item_info(Item item)
{
	printf("*- %s -* \n", item.name);
	printf("L %s \n\n", item.description);
}

int main()
{
	// 인벤토리 슬롯
	Item inventory[3];
	
	// 아이템 슬롯 개수
	int itemSlotCount = sizeof(inventory) / sizeof(inventory[0]);

	// 아이템 이름, 아이템 설명 입력
	for (int i = 0; i < itemSlotCount; ++i)
		inventory[i] = initialize_item_info();

	printf("*-- Inventory --* \n");
	// 아이템 정보 출력
	for (int i = 0; i < itemSlotCount; ++i)
		print_item_info(inventory[i]);

	return 0;
}