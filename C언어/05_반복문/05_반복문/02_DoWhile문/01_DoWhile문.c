#include <stdio.h>

// Do While 문
/// - 조건식을 평가하기 전에, 무조건 처음 한 번 do 구문을
///   실행시킨 후, while 조컨을 평가하는 반복문입니다.

// do 구문;
// while(조건식);

int main()
{
	int number = 10;

	do
	{
		printf("number = %d \n", number);
		number -= 2;
	} while (number != 10 && number > 0);


	return 0;
}