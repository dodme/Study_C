#include <stdio.h>

// 다차원 배열
/// - 배열을 요소로 갖는 배열

int main()
{

	// 2차원 배열
	/// - [2차원 길이][1차원 길이] 로 2차원 배열을 선언할 수 있습니다.
	int my_array[3][4];
	/// [ㅁㅁㅁㅁ]
	/// [ㅁㅁㅁㅁ]
	/// [ㅁㅁㅁㅁ]

	// 이차원 배열 길이
	int size2 = sizeof(my_array) / sizeof(my_array[0]);
	printf("이차원 배열 길이 : %d \n", size2);

	// 일차원 배열 길이
	int size1 = sizeof(my_array[0]) / sizeof(my_array[0][0]);
	printf("일차원 배열 길이 : %d \n", size1);

	// 각 요소에 할당될 값
	int number = 0;

	// 이차원 배열을 순회할 배열
	for (int i = 0; i < size2; ++i)
	{
		// 일차원 배열을 순회할 배열
		for (int j = 0; j < size1; ++j)
		{
			// 각각의 요소에 값을 할당합니다.
			my_array[i][j] = number++;
			printf("%d ", my_array[i][j]);
		}
		printf("\n");
	}

	return 0;
}