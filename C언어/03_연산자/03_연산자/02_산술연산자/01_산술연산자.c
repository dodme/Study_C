
// ���������
/// - ��ġ ������ �����͸� �ٷ�� ������
/// - ��ġ ���� : ����, �ε� �Ҽ��� ����
/// + : ���� ������
/// - : �E�� ������
/// * : ���� ������
/// / : ������ ������
/// % : ������ ������
 


#include <stdio.h>

int main()
{
	int my_int1 = 3;
	int my_int2 = 2;

	double addition			= my_int1 + my_int2;
	double subtraction		= my_int1 - my_int2;
	double multiplication	= my_int1 * my_int2;
	double division			= my_int1 / my_int2;
	double remainder		= my_int1 % my_int2;

	division = (double)my_int1 / my_int2;
	division = my_int1 / (double)my_int2;
	division = (double)my_int1 / (double)my_int2;

	printf("addition		= %.2f \n", addition);
	printf("subtraction		= %.2f \n", subtraction);
	printf("multiplication	= %.2f \n", multiplication);
	printf("division		= %.2f \n", division);
	printf("remainder		= %.2f \n", remainder);



	return 0;
}