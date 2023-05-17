#include <stdio.h>

// 포인터 배열

int main()
{
	int arrNum[] = { 1, 2, 3, 4, 5 };
	int* pArr = arrNum;
	int* p = arrNum + 0;
	// 배열은 주소이기때문에 주소연산자&를 쓰지 않음.

	// 방법1.
	printf("%d\n", pArr[0]);
	printf("%d\n", pArr[1]);
	printf("%d\n", pArr[2]);
	printf("%d\n", pArr[3]);
	printf("%d\n\n\n\n", pArr[4]);
	//printf("%d\n", pArr[5]);

	
	// 방법2.

	printf("%d\n", *(pArr + 0));
	printf("%d\n", *pArr + 1);
	printf("%d\n", *pArr + 2);
	printf("%d\n", *pArr + 3);

	//for(int i = 0; i < sizeof("불가능~!!!!!"))


	return 0;
}