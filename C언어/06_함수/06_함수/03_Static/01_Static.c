#include <stdio.h>

// static
/// - ���� ����, ���� �Լ��� �ۼ��մϴ�.

void add_number(int add);


int main()
{
	add_number(10);
	add_number(20);
	add_number(30);


	return 0;
}

void add_number(int add)
{
	// ���� ����
	static int value = 0;
	/// - ������ ������ �Ҵ�˴ϴ�.
	
	
	value += add;
	printf("value = %d \n", value);
}