#include <stdio.h>

// 2 차원 배열을 이용하여 다음과 같은 결과를 출력해보세요
/// 16 17 18 19 20
/// 11 12 13 14 15
///  6  7  8  9 10
///  1  2  3  4  5

int main()
{
	// 이차원 배열 선언
	int my_array[4][5];
	
	// 이차원, 일차원 배열 길이를 저장할 변수
	int size2, size1;

	size2 = sizeof(my_array) / sizeof(my_array[0]);
	size1 = sizeof(my_array[0]) / sizeof(my_array[0][0]);


	// 요소에 값을 할당할 때 사용될 변수
	int count = 1;
	
	// 값 입력용 for 문
	for (int i = size2 - 1; i > -1; --i)
	{
		for (int j = 0; j < size1; ++j)
			my_array[i][j] = count++;
	}

	// 값 출력용 for 문
	for (int i = 0; i < size2; ++i)
	{
		for (int j = 0; j < size1; ++j)
		{
			printf("%s%d ", ((my_array[i][j] < 10) ? " " : ""), my_array[i][j]);
		}
		printf("\n");
	}



	return 0;
}