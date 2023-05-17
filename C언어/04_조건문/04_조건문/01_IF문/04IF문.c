// 철수는 시험을 봤습니다.
/// - 철수의 시험점수를 입력받고, 등급을 표시하세요
/// - 철수의 시험점수는 0~100점 사이의 자연수입니다.

#pragma warning ( disable : 4996 )
#include <stdio.h>

int main()
{
	int score;
	printf("철수의 시험점수를 입력하세요 : ");
	scanf("%d", &score);

	if (score >= 0 && score <= 100)
	{
		if (score >= 95) { printf("A+\n"); }
		else if (score >= 90) { printf("A\n"); }
		else if (score >= 85) { printf("B+\n"); }
		else if (score >= 80) { printf("B\n"); }
		else if (score >= 75) { printf("C+\n"); }
		else if (score >= 70) { printf("C\n"); }
		else if (score >= 65) { printf("D+\n"); }
		else if (score >= 60) { printf("D\n"); }
		else { printf("F\n"); }
	}
	else
	{
		printf("\n잘못 입력하셨습니다. \n");
		printf("철수의 시험 점수는 0~100 점사이의 자연수입니다. \n");
	}


	return 0;
}