#include <stdio.h>

//���迬����
/// - �� �ǿ����� ������ ���踦 Ȯ���ϴ� ������
/// A == B			: A �� B �� ���� ��� ���� ��ȯ�մϴ�.
/// A != B			: A �� B �� �ٸ� ��� ���� ��ȯ�մϴ�.
/// A > B, A < B	: A �� B �� ũ�⸦ ���ϸ�, �ʰ��� �̸��� ��Ÿ���ϴ�.
/// A >= B, A <= B	: A �� B �� ũ�⸦ ���ϸ�, �̻�� ���ϸ� ��Ÿ���ϴ�.

// C ���� ���� ������ 1, 0 ���� ��Ÿ���ϴ�. 

int main()
{
	int var1 = 10;
	int var2 = 20;

	printf("(var1 == var2) = %d \n", (var1 == var2));
	printf("(var1 != var2) = %d \n", (var1 != var2));
	printf("(var1 > var2) = %d \n", (var1 > var2));
	printf("(var1 <= var2) = %d \n", (var1 <= var2));



	return 0;
}