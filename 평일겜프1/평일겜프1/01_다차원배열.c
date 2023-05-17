#include <stdio.h>


int main()
{
	int arrNum[3][4];
	/// ㅁㅁㅁㅁ
	/// ㅁㅁㅁㅁ
	/// ㅁㅁㅁㅁ
	
	// 1 ~ 12

	int count = 0;

	for (int i = 0; i < (sizeof(arrNum) / sizeof(arrNum[0])); i++)
	{
		printf("%d\n", i);
		for (int j = 0; j < (sizeof(arrNum[0]) / sizeof(arrNum[0][0])); j++)
		{	
			count++;
			arrNum[i][j] = count;
			printf("		[%d][%d] = %d\n", i, j, count);
		}
	}


	return 0;
}


// 숙제
// > 다차원 배열을 이용하여 다음과 같은 결과를 출력해봅시다.
/// 1 2 3 4 5
/// 6 7 8 9 10
/// 11 12 13 14 15
/// 16 17 18 19 20

// 2차원 배열을 이용하여 다음과 같은 결과를 출력해보세요.
/// 16 17 18 19 20
/// 11 12 13 14 15
/// 6 7 8 9 10
/// 1 2 3 4 5
