#include <stdio.h>

// ��ȯ������ void�� �ƴ� �Լ�
/// - return ���� ���� �׻� ��� ���� ��ȯ�ؾ� �մϴ�.

// return ��
/// - �Լ��� ������ �����ϰ�, ���α׷��� �帧�� �Լ� ȣ���ڿ��� ���������ϴ�.
/// - ��ȯ ������ void �� �ƴ� �Լ��� [return ��;] ������ ����
///   Ư���� ���� ��ȯ��ų �� �ֽ��ϴ�.


// get_lucky_number() �Լ��� �����մϴ�.
int get_lucky_number()
{
	// 7 �̶�� ���� ��ȯ��ŵ�ϴ�.
	return 7;
}

int main()
{
	// function_return_value �� get_lucky_number() �Լ��� ��ȯ ���� �Է��մϴ�.
	int function_return_value = get_lucky_number();

	printf("function_return_value = %d \n", function_return_value);

	return 0;
}