#include <stdio.h>

// �޸� ������
/// - ���ʺ��� ���������� ���ʷ� ������ �����ϸ�
/// - ���� �������� �ǿ����ڰ� ���� ������� �Ǵ� ������

int main()
{
	int var1 = 10,
		var2 = 20,
		var3 = 30,
		res;

	res = (++var1, ++var2, --var3);
	/// - �޸� �����ڴ� �� ��ȣ�� �Բ� ����ؾ� �մϴ�.

	printf("var1 = %d \n", var1);
	printf("var2 = %d \n", var2);
	printf("var3 = %d \n", var3);
	printf("res = %d \n", res);

	return 0;
}