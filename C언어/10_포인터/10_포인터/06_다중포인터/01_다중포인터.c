#include <stdio.h>

int main()
{
	int number = 10;

	// number �� pnumber �� ����Ű���� �մϴ�.
	int* pnumber = &number;

	// pnumber �� ppnumber �� ����Ű���� �մϴ�.
	int** ppnumber = &pnumber;

	// pnumber �� ����Ű�� ������ pnubmer2 �� ����Ű���� �մϴ�.
	int* pnumber2 = pnumber;

	printf("number = %d \n", number);
	printf("pnumber = %d \n", pnumber);
	printf("pnumber2 = %d \n", pnumber2);
	printf("ppnumber = %d \n", ppnumber);

	printf("\n");
	printf("number = %d \n", number);
	printf("*pnumber = %d \n", *pnumber);
	printf("**ppnumber = %d \n", **ppnumber);

	int*** pppnumber = &ppnumber;
	printf("***pppnumber = %d \n", ***pppnumber);

	return 0;
}