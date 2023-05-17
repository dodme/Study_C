#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	// unsigned : 부호없는 자료형

	unsigned int kor = 0, eng = 0, math = 0;

	printf("철수의 국어성적, 영어성적, 수학성적을 각각 입력하세요.\n");
	scanf("%u %u %u", &kor, &eng, &math);

	printf("국어 : %u\n영어 : %u\n수학 : %u\n", kor, eng, math);



	return 0;
}