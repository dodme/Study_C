
// ��Ʈ������
/// - ��Ʈ�� �����ϱ� ���� ������

// << : (LEFT SHIFT)���� ����Ʈ
// >> : (RIGHT SHIFT)������ ����Ʈ
//  & : (AND)����
//  | : (OR)����
//  ^ : (XOR)��Ÿ�� ����
//  ~ : (NOT)����


#include <stdio.h>
#include <string.h>
#pragma warning ( disable : 4996 )

const char* convertB(int value)
{
	static char b[9];
	b[0] = '\0';

	for (int i = 128; i > 0; i >>= 1)
		strcat(b, ((value & i) == i) ? "1" : "0");

	return b;
}


int main()
{
	// ����Ʈ ������
	/// - ���� �ǿ������� ��Ʈ�� �� ���� �ǿ������� ����ŭ
	///   �����̳� ���������� �̵���ŵ�ϴ�.
	/// - �и� ��Ʈ�� �����ϰ�, ������ ��Ʈ�� ��� 0���� ó���մϴ�.
	printf("SHIFT OPERATOR \n");
	int variable1 = 0b1100100;

	printf("variable1 = %d = 0b%s \n", variable1, convertB(variable1));

	// ���� ����Ʈ ���� �� ����մϴ�.
	variable1 = variable1 << 2;
	printf("variable1 = variable << 2 \n");
	printf("variable1 = %d = 0b%s \n", variable1, convertB(variable1));

	variable1 = variable1 >> 2;
	printf("variable1 = variable >> 2 \n");
	printf("variable1 = %d = 0b%s \n", variable1, convertB(variable1));

	printf("\nAND OPERATOR \n");
	/// - �� ���� �������� 1 �� ��� 1�� ó��,
	/// - �ϳ��� 0 �� ��� 0���� ó���մϴ�.
	int variable2 = 12;
	int variable3 = 8;
	int result = variable2 & variable3;

	printf("variable2 = %d = 0b%s \n", variable2, convertB(variable2));
	printf("variable3 = %d = 0b%s \n", variable3, convertB(variable3));
	printf("result = (variable2 & variable3) = %d = 0b%s \n", result, convertB(result));
	printf("\n");

	printf("\nOR OPERATOR \n");
	/// - �� ���� �������� �ϳ��� 1�� ��� 1�� ó��.
	/// - �ɼ��� ��Ÿ�� �� ���� ���

	result = variable2 | variable3;
	printf("variable2 = %d = 0b%s \n", variable2, convertB(variable2));
	printf("variable3 = %d = 0b%s \n", variable3, convertB(variable3));
	printf("result = (variable2 | variable3) = %d = 0b%s \n", result, convertB(result));
	printf("\n");

	printf("\nXOR OPERATOR \n");
	/// - �� �������� ���� �ٸ��� 1�� ó��.

	result = variable2 ^ variable3;
	printf("variable2 = %d = 0b%s \n", variable2, convertB(variable2));
	printf("variable3 = %d = 0b%s \n", variable3, convertB(variable3));
	printf("result = (variable2 ^ variable3) = %d = 0b%s \n", result, convertB(result));
	printf("\n");

	printf("\nNOT OPERATOR \n");
	/// - �ǿ������� ��Ʈ�� 0�� 1��, 1�� 0���� ������ŵ�ϴ�.

	result = ~result;
	printf("result = (~result) = %d = 0b%s \n", result, convertB(result));
	printf("\n");

	return 0;
}