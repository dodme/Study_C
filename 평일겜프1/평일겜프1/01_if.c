#include <stdio.h>

// �б⹮

// If�� / ���ǹ�
/// ���࿡ ~ ���
/// if(���ǽ�)
/// {
///		���ǽ��� ���϶��� ������ �ڵ�;
/// }



int main()
{
	int characterHp = 100;
	int damage = 10;

	printf("����� ���Ϳ��� ������ ���߽��ϴ�.\n");
	characterHp -= damage;

	if (characterHp > 0)
	{
		printf("����� ��� �ֽ��ϴ�.\n");
	}

	printf("����");



	return 0;
}