#include <stdio.h>

// if else if else 구문

enum Key
{
	W,
	S,
	A,
	D,
	Space,
};

int main()
{
	enum Key key = W;

	if (key == W)
		printf("앞\n");
	else if (key == S)
		printf("뒤\n");
	else if (key == A)
		printf("왼\n");
	else if (key == D)
		printf("오\n");
	else
		printf("대기중\n");



	return 0;
}