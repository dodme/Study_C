
// 유클리드 알고리즘
/// - 주어진 두 수의 최대 공약수를 구하는 알고리즘

// 1. N 과 M 을 입력받습니다.
// 2. M 의 값이 0 이라면 N은 최대 공약수입니다.
// 3. temp 에 N 을 M 으로 나눈 나머지를 입력합니다.
// 4. N 에는 M을, M에는 Temp 를 입력합니다.
// 5. 2번으로 돌아가 5번까지 반복합니다.

#pragma warning ( disable : 4996 )
#include <stdio.h>

int main()
{
	int N, M, temp;

	scanf("%d %d", &N, &M);

	while (M != 0)
	{
		temp = N % M;
		N = M;
		M = temp;
	}

	printf("최대공약수는 %d 입니다.", N);

	return 0;
}