#include <stdio.h>

// if else if else ����

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
		printf("��\n");
	else if (key == S)
		printf("��\n");
	else if (key == A)
		printf("��\n");
	else if (key == D)
		printf("��\n");
	else
		printf("�����\n");



	return 0;
}