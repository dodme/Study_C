
// Switch 문
/// - 조건식의 결과가 가질 수 있는 다양한 경우를 한번에 
///   프로그램의 흐름을 가를 때 사용합니다.

// Switch 문 사용방법

// switch (결과를 검사할 값)
// {
// case 1 :
//		[결과를 검사할 값] 이 1 이라면 실행할 코드;
//		break;
// case 2 :
//		[결과를 검사할 값] 이 2 라면 실행할 코드;
//		break;
// default :
//		[결과를 검사할 값] 이 1과 2가 아니라면 실행할 코드;
//		break;
// }

#include <stdio.h>

int main()
{
	int number = 10;


	switch (number)
	{
		case 5 :
			printf("number 는 5 입니다. \n");
			break;

		case 10 :
			printf("number 는 10 입니다. \n");
			break;
	
		default :
			printf("number 는 5와 10이 아닙니다. \n");
			break;
	}


	return 0;
}