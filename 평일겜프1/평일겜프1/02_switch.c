#include <stdio.h>

enum IsReal
{
	Q,
	W,
	E,
	R,
	None,
};

int main()
{
	enum IsReal isReal = None;

	switch (isReal)
	{
	case Q:
		printf("�ź��� ȭ��\n");
		break;
	case W:
		printf("�������帧\n");
		break;
	case E:
		printf("�����̵�\n");
		break;
	case R:
		printf("�������ϰ�\n");
		break;
	}

	return 0;
}