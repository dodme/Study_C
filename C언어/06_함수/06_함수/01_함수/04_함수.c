// 학생 성적 평가 프로그램을 작성하시오.
/// - int 형 변수 kor, eng, math 에 각각 국어, 영어, 수학 점수를 사용자 입력을 통해
///   값을 할당하고 [과목의 총점], [과목의 평균], [최고 점수] 를 반환하는 함수를 정의하며
///   다음과 같이 작동하는 프로그램을 작성하세요.

// intput
/// 국어점수를 입력하세요 : 90
/// 수학점수를 입력하세요 : 90
/// 영어점수를 입력하세요 : 91

// output
/// 총점 : 271점
/// 평균 : 90.3334점
/// 최고 점수 : 91점

#pragma warning ( disable : 4996 )
#include <stdio.h>

int total(int num1, int num2, int num3);
float avg(int total, int subject_number);
int high(int num1, int num2, int num3);


int main()
{
	int kor, eng, math;
	printf("국어점수를 입력하세요 : ");
	scanf("%d", &kor);
	printf("영어점수를 입력하세요 : ");
	scanf("%d", &eng);
	printf("수학점수를 입력하세요 : ");
	scanf("%d", &math);


	printf("총점은 %d 점 입니다. \n", total(kor, eng, math));
	printf("평균은 %.4f 점 입니다. \n", avg(total(kor, eng, math), 3));
	printf("최고 점수는 %d 점 입니다. \n", high(kor, eng, math));

	return 0;								  
}											  
											  
int total(int num1, int num2, int num3)		  
{
	return num1 + num2 + num3;
}

float avg(int total, int subject_number)
{
	return ((float)total / subject_number);
}

int high(int num1, int num2, int num3)
{
	/*if (num1 >= num2 && num1 >= num3) { return num1; }
	else { return num2 >= num3 ? num2 : num3; }*/
	int temp = (num1 > num2) ? num1 : num2;
	return (temp > num3) ? temp : num3;
}