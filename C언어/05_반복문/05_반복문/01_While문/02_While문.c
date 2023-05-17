#include <stdio.h>

int main()
{
	// 1 부터 10까지 출력하는 반복문
	int count = 1;

	while (count <= 10)
		printf("count = %d \n", count++);

	// while 문을 이용하여 1 부터 100 까지의 합을 구해보세요!
	// output
	// 1 부터 100까지의 합 : 5050
	
	count = 1;
	int result = 0;

	while (count <= 100)
		result += count++;
	
	printf("1부터 100까지의 합은 %d 입니다. \n", result);

	return 0;
}
