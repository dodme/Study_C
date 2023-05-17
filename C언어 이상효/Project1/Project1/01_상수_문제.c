#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	int kor = 0;
	int eng = 0;
	int math = 0;
	int total = (kor + eng + math);
	int average = (kor + eng + math) / 3;

	printf("국어점수를 입력하세요. \n");
	scanf("%d", &kor);
	printf("영어점수를 입력하세요. \n");
	scanf("%d", &eng);
	printf("수학점수를 입력하세요. \n");
	scanf("%d", &math);

	printf("국어점수는 %d 점 입니다.\n", kor);
	printf("영어점수는 %d 점 입니다.\n", eng);
	printf("수학점수는 %d 점 입니다.\n", math);

	printf("점수의 총합 %d입니다.\n", total);
	printf("평균점수는 %d입니다.\n", average);


	return 0;
}