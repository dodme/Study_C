#include <stdio.h>

int main()
{
	// 1 ���� 10���� ����ϴ� �ݺ���
	int count = 1;

	while (count <= 10)
		printf("count = %d \n", count++);

	// while ���� �̿��Ͽ� 1 ���� 100 ������ ���� ���غ�����!
	// output
	// 1 ���� 100������ �� : 5050
	
	count = 1;
	int result = 0;

	while (count <= 100)
		result += count++;
	
	printf("1���� 100������ ���� %d �Դϴ�. \n", result);

	return 0;
}
