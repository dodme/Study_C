#pragma warning (disable : 4996)

#include <stdio.h>
#include <windows.h>

typedef struct tag_item
{
	char name[256];
	char info[256];
} Item;

int main()
{
	
	Item A,B,C;
	
	for (int i = 0; i < 3; ++i)
	{
		printf("�������� �̸��� �Է��ϼ��� : ");
		scanf("%s \n", A.name);
		printf("�������� ������ �Է��ϼ��� : ");
		scanf("%s \n", A.info);
		system("cls");
	}
	printf("�������� �̸��� �Է��ϼ��� : ");
	scanf("%s \n", B.name);
	printf("�������� ������ �Է��ϼ��� : ");
	scanf("%s \n", B.info);
	system("cls");

	printf("�������� �̸��� �Է��ϼ��� : ");
	scanf("%s \n", C.name);
	printf("�������� ������ �Է��ϼ��� : ");
	scanf("%s \n", C.info);
	system("cls");

	printf("*-- Inventory --* \n");
	printf("*- %s -* \n", A.name);
	printf(" ��%s \n", A.info);
	
	printf("*- %s -* \n", B.name);
	printf(" ��%s \n", B.info);

	printf("*- %s -* \n", C.name);
	printf(" ��%s \n", C.info);

	return 0;
}