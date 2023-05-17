#include <stdio.h>

// 반복문
/// while for
///
/// while(조건식)	~동안에
/// {
///		조건식이 참인 동안에 반복할 코드;
/// }
/// 
/// for(초기화식; 조건식; 증감식)	~향해
/// {
///		조건식이 참일떄 반복할 코드
/// }

int main()
{
	int count = 0;

	while (count < 10)
	{
		count++;
		printf("반복!\n");
	}

	printf("실행\n");

	return 0;
}