#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


#define TRUE 1
#define FALSE 0


int main()
{
	int size = 0;
	int* parray = NULL;

	while (TRUE)
	{
		system("cls");
		// ��� ���
		if (size != 0)
		{
			for (int i = 0; i < size; ++i)
				printf("%d", parray[i]);
			printf("\n");
		}


		printf("������ �Է��ϼ��� (���� : -1) : ");
		int input;
		scanf("%d", &input);

		++size;
		
		// ����
		if (input == -1)
		{
			// �޸� �Ҵ��� ����� ���¶��
			if (parray != NULL)
			{
				// �޸� ����
				free(parray);
				parray = NULL;
			}
			// �ݺ��� ����
			break;
		}

		// �޸� �Ҵ��� ������� ���� ���¶��
		if (parray == NULL)
		{
			// ���ο� �޸� �Ҵ�
			parray = (int*)calloc(size, sizeof(int));
		
			// ù ���� ��ҿ� �� �Ҵ�
			*parray = input;
		}
	
		// �޸� �Ҵ��� ����� ���¶��
		else 
		{
			// parray �� ����Ű�� �޸� ���� ����
			// int* temp = parray;

			//// parray �� ���ο� �޸� ���� �Ҵ�
			//parray = (int*)calloc(size, sizeof(int));

			//// �� �ű��
			//for (int i = 0; i < size - 1; ++i)
			//	parray[i] = temp[i];

			// temp �� ����Ű�� �޸� ���� ����
			// free(temp);

			parray = (int*)realloc(parray, size * sizeof(int));
			/// - realloc(p, size) : p �� ����Ű�� �޸� ������ ũ�⸦ size ũ��� ���Ҵ� �մϴ�.
			/// - ���Ҵ��� �Է��� ���� �����ϸ�, ���� �߰��� �޸𸮿��� �����Ⱚ�� ����ֽ��ϴ�.
			/// - ���� realloc �� ���ؼ� �뷮�� ���δٸ� �Էµ� �����ʹ� ����� �� �� �ִ�.
			/// - �޸� ���Ҵ� �������� �޸� ��ġ�� ����� �� �����Ƿ�, �׻� realloc() �Լ���
			///   ��ȯ���� �ٽ� �޾ƾ��մϴ�.

			// ���ο� ��ҿ� �� ����
			parray[size - 1] = input;
		}
	}

	return 0;
}