#include <stdio.h>

int main()
{
	int my_array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0;		/// - 각각의 요소에 접근할 수 이쓴ㄴ index 로 설정
		i < 10;			/// - i 의 값이 for 문 내에서 9까지 증가했을 때에만 반복하도록 설정합니다.
		++i)			/// - 한 회씩 반복 실행될 때마다 다음 요소에 접근할 수 있는 인덱스로 변경합니다.
	{
			printf("my_array[%d} = %d \n", i, my_array[i]);
	}

	//  배열의 범위를 벗어난 메모리에 접근한다면 그에 대한 결과를 예측할 수 없게 됩니다.
	//my_array[10] = 100;
	//printf("my_array[10] = %d \n", my_array[10]);

	return 0;
}