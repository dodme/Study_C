#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// ����
/// - Ư���� �迭 ����, ��Ģ�� ������ �ʴ� �������� ������ ��
/// - C ������ rand() �Լ��� �̿��Ͽ� ������ �����մϴ�.
/// - <stdlib.h> �� �ʿ��մϴ�.


int main()
{
	srand(GetTickCount64());

	for (int i = 0; i < 5; ++i)
		printf("%d \n", rand() % 6);



	return 0;
}