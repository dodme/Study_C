#include <stdio.h>

// 논리연산자
/// > && And		: 둘다 참이면 참
/// > || Or			: 둘중 하나라도 참이면 참
/// > ! Not			: 진리값을 뒤집습니다.

int main()
{
	//printf("%d\n", 1 && 1);
	//printf("%d\n", 1 && 0);
	//printf("%d\n", 0 && 1);
	//printf("%d\n", 0 && 0);

	//printf("%d\n", 1 || 1);
	//printf("%d\n", 1 || 0);
	//printf("%d\n", 0 || 1);
	//printf("%d\n", 0 || 0);

	//printf("%d\n", !1);
	//printf("%d\n", !0);

	int A = 5;
	int B = 7;

	printf("%d\n", !((A + B) > (A - B)) && ((A++) < (B++)));


	return 0;
}