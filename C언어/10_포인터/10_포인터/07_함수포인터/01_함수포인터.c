
// �Լ� ������
/// - ȣ���� �Լ��� ����Ű�� ������ ������ �ǹ��մϴ�.
/// - ���°� ���� �پ��� ����� �Լ��� ���������� ȣ���� �� ���˴ϴ�.


#include <stdio.h>

int plus(int a, int b)
{
	return a + b;
}

int (*fn_plus)(int, int);
typedef int (*Plus)(int, int);
/// - typedef �� ���� �Լ����� �ƴ�, Ÿ���� ������ ���� �ֽ��ϴ�.

#define Action(fnName, paramTypes) void(*fnName)paramTypes
#define Func(retType, fnName, paramTypes) retType(*fnName)paramTypes

void print_hello()
{
	printf("hello! \n");
}

int main()
{
	// �Լ� ������ ����
	//void(*fn_print_hello)();
	//Func(void, fn_print_hello, ());
	Action(fn_print_hello, ());
	/// - ���� ���
	/// ����ų �Լ��� ��ȯ ���� (*�Լ������͸�)(�Ű�����Ÿ��);
	/// - ȣ���� �Լ� ���ε� ���
	/// �Լ������͸� = ȣ���� �Լ���;
	fn_print_hello = print_hello;

	// �Լ� �����Ͱ� ����Ű�� �Լ��� ȣ���մϴ�.
	fn_print_hello();

	//fn_plus = plus;
	Plus fn_plus2 = plus;
	//printf("fn_plus(10, 20) = %d \n", fn_plus(10, 20));
	printf("fn_plus2(10, 20) = %d \n", fn_plus2(10, 20));


	return 0;
}