#include <stdio.h>

// �ݺ���
/// while for
///
/// while(���ǽ�)	~���ȿ�
/// {
///		���ǽ��� ���� ���ȿ� �ݺ��� �ڵ�;
/// }
/// 
/// for(�ʱ�ȭ��; ���ǽ�; ������)	~����
/// {
///		���ǽ��� ���ϋ� �ݺ��� �ڵ�
/// }

int main()
{
	int count = 0;

	while (count < 10)
	{
		count++;
		printf("�ݺ�!\n");
	}

	printf("����\n");

	return 0;
}