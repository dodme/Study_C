#include <stdio.h>

// 열거형?
/// > 상수들의 집합
/// > enum

// 0부터 1씩 증가하는 순서값 : index번호
enum Job
{
	전사,
	마법사,
	궁수,
	도적,
};


int main()
{
	enum Job job = 전사;

	

	printf("당신의 직업은 : %d 입니다.\n", job);


	return 0;
}