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
		printf("신비한 화살\n");
		break;
	case W:
		printf("정수의흐름\n");
		break;
	case E:
		printf("비전이동\n");
		break;
	case R:
		printf("정조준일격\n");
		break;
	}

	return 0;
}