#include <stdio.h>

int main()
{

	int number = 0;

	while (1)
	{
		if (number == 5)
		{
			// 레이블 Teleport 위치로 흐름을 변경합니다.
			goto Teleport;
			// goto문을 남발하게되면 코드가 꼬일 수 도 있다
		}
		printf("number = %d \n", number++);
	}

	// 레이블 Teleport 를 선언합니다.
Teleport :
	printf("Teleport! \n");

	return 0;
}