#include <stdio.h>

int main()
{

	int number = 0;

	while (1)
	{
		if (number == 5)
		{
			// ���̺� Teleport ��ġ�� �帧�� �����մϴ�.
			goto Teleport;
			// goto���� �����ϰԵǸ� �ڵ尡 ���� �� �� �ִ�
		}
		printf("number = %d \n", number++);
	}

	// ���̺� Teleport �� �����մϴ�.
Teleport :
	printf("Teleport! \n");

	return 0;
}