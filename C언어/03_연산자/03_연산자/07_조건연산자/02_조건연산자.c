// int 형식 변수 num1 과 num2 에 사용자 입력을 통해 값을 입력하고
// 어떤 값이 더 큰지 검사하여 큰 값과 작은 값을 출력해보세요!

// input
/// - num1 을 입력하세요 : 10
/// - num2 을 입력하세요 : 20

// output
/// - 큰 값은 20 입니다.
/// - 작은 값은 10 입니다.
 

#include <stdio.h>
#pragma warning (disable : 4996)
#include <Windows.h>

int main()
{
	int num1, num2;
	printf("num1 을 입력하세요 : ");
	scanf("%d", &num1);
	printf("num2 를 입력하세요 : ");
	scanf("%d", &num2);

	printf("큰 값은 %d 입니다 \n", max(num1, num2));
	printf("작은 값은 %d 입니다 \n", min(num1, num2));

	/*printf("큰 값은 %d 입니다 \n", ((num1 > num2) ? num1 : num2));
	printf("작은 값은 %d 입니다 \n", ((num1 < num2) ? num1 : num2));*/
	
	return 0;
}