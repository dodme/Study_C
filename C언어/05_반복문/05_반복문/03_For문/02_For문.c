#pragma warning ( disable : 4996 )
#include <stdio.h>

int main()
{
	// for ���� ��ø���Ѽ� ������ ���� ����� ����غ�����.

	// ����� for ��
	for (int i = 0; i < 5; ++i)
	{
		// �� ��¿� for ��
		for (int j = 0; j <= i; ++j)
			printf("* ");
		printf("\n");
	}

		printf("\n");
	

	// ����� for ��
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5 - i; ++j)
			printf("* ");
		printf("\n");
	}

		printf("\n");

		int n;
		scanf("%d", &n);

		// Ʈ�� �����
		for (int i = 0; i < n; ++i)
		{
			for (int j = 1; j < n - i; ++j)
				printf("  ");

			for (int k = 0; k < ((i * 2) + 1); ++k)
				printf("* ");

			printf("\n");
		}

		printf("\n");
		
		// �Ǻ���ġ ����
		int n1 = 0;
		int n2 = 1;
		int n3;

		for (int i = 0; i < n; ++i)
		{
			printf("%d ", n2);
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}


	return 0;
}