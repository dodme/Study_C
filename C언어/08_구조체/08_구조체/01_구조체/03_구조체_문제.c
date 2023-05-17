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
		printf("아이템의 이름을 입력하세요 : ");
		scanf("%s \n", A.name);
		printf("아이템의 설명을 입력하세요 : ");
		scanf("%s \n", A.info);
		system("cls");
	}
	printf("아이템의 이름을 입력하세요 : ");
	scanf("%s \n", B.name);
	printf("아이템의 설명을 입력하세요 : ");
	scanf("%s \n", B.info);
	system("cls");

	printf("아이템의 이름을 입력하세요 : ");
	scanf("%s \n", C.name);
	printf("아이템의 설명을 입력하세요 : ");
	scanf("%s \n", C.info);
	system("cls");

	printf("*-- Inventory --* \n");
	printf("*- %s -* \n", A.name);
	printf(" ㄴ%s \n", A.info);
	
	printf("*- %s -* \n", B.name);
	printf(" ㄴ%s \n", B.info);

	printf("*- %s -* \n", C.name);
	printf(" ㄴ%s \n", C.info);

	return 0;
}