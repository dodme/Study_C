#include <stdio.h>

// ��������
/// - �Լ� �ۿ� ����Ǹ�, �������� ��� �ٸ� ���� ������ �ٸ���
///   �������� ���� �ʴ� ������ �ǹ��մϴ�.
/// - ������ ������ �Ҵ�˴ϴ�.
/// - �ʱ�ȭ ��Ű�� �ʾƵ� 0 �̶�� ������ �ʱ�ȭ�˴ϴ�.

// ���� ������ �����մϴ�.
int globalVariable;

// �ܺ� ���Ͽ� ����� myVariable ���� ������ ����մϴ�.
extern int myVariable;
/// - extern : ������ ����Ǵ� ������ �ܺ� ���Ͽ� �ִ� �������� ����մϴ�.

// �ܺ� ���Ͽ� ���ǵ� �Լ��� �����մϴ�.
/// �Լ��� extern�� �����ص� �ǰ� ���ص� �ȴ�.
void print_my_variable();

int main()
{
	// ���� ������ ��� �Լ����� ����� �� �ֽ��ϴ�.
	// globalVariable = 10;

	printf("globalVariable = %d \n", globalVariable);
	print_my_variable();
	//printf("myVariable = %d \n", myVariable);

	return 0;
}