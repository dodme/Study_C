#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int kor = 0, eng = 0, math = 0;

	printf("철수의 국어 영어 수학 점수를 입력하세요.");
	scanf("%d %d %d", &kor, &eng, &math);

	int total = kor + eng + math;

	if ((total / 3) >= 60)
		printf("합격\n");
	else
		printf("불합격\n");

	

	return 0;
}