#include <stdio.h>

// ��������
/// > && And		: �Ѵ� ���̸� ��
/// > || Or			: ���� �ϳ��� ���̸� ��
/// > ! Not			: �������� �������ϴ�.

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