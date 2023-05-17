#pragma warning (disable : 4996)

#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct tag_item
{
	// �������� �̸�
	char name[256];

	// ������ ����
	char description[256];
} Item;

Item initialize_item_info()
{
	Item newItem;
	printf("�߰���ų �������� �̸��� �Է��Ͻÿ� : ");
	scanf("%[^\n]s", newItem.name);

	// �Է� ���ۿ� �����ִ� ���� ���� ����
	while (getchar() != '\n');

	printf("%s �� ������ �Է��Ͻÿ� : ", newItem.name);
	scanf("%[^\n]s", newItem.description);

	// �Է� ���ۿ� �����ִ� ���� ���� ����
	while (getchar() != '\n');

	// �ܼ�â ����
	system("cls");

	// �̸� / ������ �Է½�Ų �� �� �����͸� ���� ���� ��ȯ
	return newItem;
}

// ������ ������ ����ϴ� �Լ�
void print_item_info(Item item)
{
	printf("*- %s -* \n", item.name);
	printf("L %s \n\n", item.description);
}

int main()
{
	// �κ��丮 ����
	Item inventory[3];
	
	// ������ ���� ����
	int itemSlotCount = sizeof(inventory) / sizeof(inventory[0]);

	// ������ �̸�, ������ ���� �Է�
	for (int i = 0; i < itemSlotCount; ++i)
		inventory[i] = initialize_item_info();

	printf("*-- Inventory --* \n");
	// ������ ���� ���
	for (int i = 0; i < itemSlotCount; ++i)
		print_item_info(inventory[i]);

	return 0;
}