#include <stdio.h>

// 삼항연산자
/// (조건식) ? true : false;

enum Button
{
	OK,
	Cancle,
};

int main()
{
	int N = 10;
	int M = 20;

	enum Button btn = OK;

	(btn == OK) ? printf("확인\n") : printf("취소\n");
	printf((btn == OK) ? "확인\n" : "취소\n");

	N = (N > M) ? N : M;


	return 0;
}