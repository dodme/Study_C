#include <stdio.h>
#pragma warning (disable : 4996)

int Total(int kor, int eng, int math)
{
	return kor + eng + math;
}

float Average(int kor, int eng, int math)
{
	return Total(kor, eng, math) / 3.0f;
}

int HighScore(int kor, int eng, int math)
{
	int temp = (kor > eng) ? kor : eng;
	return (temp > math) ? temp : math;
}

int main()
{
	int kor = 0, eng = 0, math = 0;

	printf("철수의 국어점수를 입력하세요.\n");
	scanf("%d", &kor);
	printf("철수의 영어점수를 입력하세요.\n");
	scanf("%d", &eng);
	printf("철수의 수학점수를 입력하세요.\n");
	scanf("%d", &math);

	printf("\n");

	printf("철수의 총점은 %d점 입니다.\n", Total(kor, eng, math));
	printf("철수의 평균은 %.2f점 입니다.\n", Average(kor, eng, math));
	printf("철수의 최고점수는 %d점 입니다.\n", HighScore(kor, eng, math));

	return 0;
}



// 숙제
/// 1. 최고점수
/// 2. 사용자에게 생년을 받아와 사용자의 나이를 반환하는
///    함수를 작성하세요
