// 학생의 국영수 점수를 입력받고 평균을 구하여 다음과 같은 결과를 출력해주세요.
/// - 국영수의 평균이 80.5 미만이라면 "평균은 80.5 미만입니다." 출력 
/// - 국영수의 평균이 80.5 이상이라면 "평균은 80.5 이상입니다."	출력 
 
// 조건 : if 문을 사용하여 풀어보세요.

#include <stdio.h>
#pragma warning ( disable : 4996 )

int main()
{
	int kor, eng, math;

	printf("국어 점수를 입력하세요 : ");
	scanf("%d", &kor);
	printf("영어 점수를 입력하세요 : ");
	scanf("%d", &eng);
	printf("수학 점수를 입력하세요 : ");
	scanf("%d", &math);

	float avg = (((float)kor + eng + math) / 3);

	if ((avg >= 80.5f))	printf("평균은 80.5 이상입니다.");
	else				printf("평균은 80.5 미만입니다.");


	return 0;
}
