#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int kor = 0, eng = 0, math = 0;

	printf("철수의 국어점수, 영어점수, 수학점수를 입력하세요.\n");

	scanf("%d %d %d", &kor, &eng, &math);

	float average = (float)(kor + eng + math) / 3;

	printf("철수의 평균은 %.2f 입니다.\n", average);

	if (average >= 60)
	{
		printf("합격입니다.\n");
	}
	else
	{
		printf("불합격입니다.\n");
	}

	return 0;
}