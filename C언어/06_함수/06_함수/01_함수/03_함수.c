#pragma warning ( disable : 4996 )
#include <stdio.h>

// 매개 변수
/// - 함수에서 사용할 데이터를 전달받는 일을 하는 변수

// 함수를 선언합니다.
int print_age(int birth_year);
int plus_numbers(int number1, int number2);

int main()
{
	printf("당신이 태어난 년도를 입력하시오 : ");
	int your_birth_year;
	scanf("%d", &your_birth_year);

	int your_age = print_age(your_birth_year);

	printf("당신의 지인이 태어난 년도를 입력하시오 : ");
	int friend_birth_year;
	scanf("%d", &friend_birth_year);

	int friend_age = print_age(friend_birth_year);

	printf("당신과 당신 지인의 나이 합 = %d 살 입니다. \n", plus_numbers(your_age, friend_age));
	
	return 0;
}

// 자신의 나이를 출력하는 함수를 정의합니다.
/// - birth_year : 생년을 전달합니다.
int print_age(int birth_year)
{
	// 현재 년도를 나타낼 상수를 선언합니다.
	const int current_year = 2021;

	// 만약 현재 년도보다 큰 값이 전달되었다면
	if (current_year <= birth_year)
	{
		printf("년도가 잘못 되었습니다. \n");
		printf("현재 년도 : %d 년 \n", current_year);
		printf("전달된 년도 : %d 년 \n", birth_year);

		// 함수 호출을 종료합니다.
		return 0;
	}

	int your_age = current_year - birth_year + 1;
	printf("나이는 %d 살 입니다.\n", your_age);

	return your_age;
}


// 전달받은 아규먼트 두 개의 합을 반환하는 함수입니다.
int plus_numbers(int number1, int number2) 
{
	return number1 + number2;
}