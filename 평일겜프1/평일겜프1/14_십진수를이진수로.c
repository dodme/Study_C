#include <stdio.h>
#pragma warning (disable : 4996)

// 10진수의 수를 2진수로 출력하세요.

// 10 -> 1010
// 20 -> 10100

int main()
{
	//2진수
	int eeJinSu[256];
	//10진수
	int tenJinSu = 0;
	//배열갯수를 담을 변수
	int count = 0;

	printf("2진수로 변경할 10진수를 입력하세요.\n");
	scanf("%d", &tenJinSu);

	while (1)
	{
		if ((tenJinSu == 1) || (tenJinSu == 0))
		{
			eeJinSu[count] = (tenJinSu % 2);
			break;
		}
		eeJinSu[count] = (tenJinSu % 2);
		tenJinSu /= 2;
		count++;

	}
	
	for (int i = count; i >= 0; i--)
	{
		printf("%d", eeJinSu[i]);
	}

	
	return 0;
}