#include <stdio.h>

// 배열의 요소를 1 ~ 10까지의 수로 초기화

int main()
{
	//int arrNum[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int arrNum[10];
	// sizeof(int) == sizeof(arrNum[0])
	// sizeof(구하고자 하는 메모리) : return 메모리의 크기

	for (int i = 0; i < (sizeof(arrNum) / sizeof(arrNum[0])); i++)
	{
		arrNum[i] = i + 1;
		printf("arrNum[%d] : %d\n", i, arrNum[i]);
	}


	return 0;
}



// 숙제
/// 31 ~ 60을 배열에 담아
/// 31 ~ 60 을 출력하세요! 





