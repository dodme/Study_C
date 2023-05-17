#include <stdio.h>

int main()
{
	int number = 10;

	// number 를 pnumber 가 가리키도록 합니다.
	int* pnumber = &number;

	// pnumber 를 ppnumber 가 가리키도록 합니다.
	int** ppnumber = &pnumber;

	// pnumber 가 가리키는 변수를 pnubmer2 도 가리키도록 합니다.
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