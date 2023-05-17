#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
	// 입력받을 수 두가지
	int inputNum1 = 0, inputNum2 = 0;
	// 큰 수를 담을 변수
	int num = 0;

	printf("두 개의 숫자를 입력하세요.\n");
	scanf("%d %d", &inputNum1, &inputNum2);

	// 둘중 큰 수를 num에 대입
	if (inputNum1 > inputNum2)
		num = inputNum1;
	else if (inputNum2 >= inputNum1)
		num = inputNum2;

	// i를 num부터 1씩 감소시키며 inputNum1, inputNum2와 나머지계산이 0이 나오는 수 출력
	for (int i = num; i > 0; i--)
	{
		if ((inputNum1 % i) == 0)
		{
			if ((inputNum2 % i) == 0)
			{
				printf("%d", i);
				// i중 가장 큰 수를 출력했다면 프로그램 종료
				break;
			}
		}
	}



	return 0;
}