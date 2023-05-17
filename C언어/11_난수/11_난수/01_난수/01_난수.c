#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// 난수
/// - 특정한 배열 순서, 규칙을 가지지 않는 연속적인 임의의 수
/// - C 언어에서는 rand() 함수를 이용하여 난수를 생성합니다.
/// - <stdlib.h> 가 필요합니다.


int main()
{
	srand(GetTickCount64());

	for (int i = 0; i < 5; ++i)
		printf("%d \n", rand() % 6);



	return 0;
}