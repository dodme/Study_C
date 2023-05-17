#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	int score = 0;

	printf("Enter The Integer..\n");
	scanf("%d", &score);

	if ((score >= 0) && (score <= 100))
	{
		if (score >= 95)
			printf("A+\n");
		else if (score >= 90)
			printf("A\n");
		else if (score >= 85)
			printf("B+\n");
		else if (score >= 80)
			printf("B\n");
		else if (score >= 75)
			printf("C+\n");
		else if (score >= 70)
			printf("C\n");
		else if (score >= 65)
			printf("D+\n");
		else if (score >= 60)
			printf("D\n");
		else
			printf("재수강\n");
	}
	else
		printf("다시 입력하세요.\n");

	return 0;
}