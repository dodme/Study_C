#include <stdio.h>

// ���׿�����
/// (���ǽ�) ? true : false;

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

	(btn == OK) ? printf("Ȯ��\n") : printf("���\n");
	printf((btn == OK) ? "Ȯ��\n" : "���\n");

	N = (N > M) ? N : M;


	return 0;
}