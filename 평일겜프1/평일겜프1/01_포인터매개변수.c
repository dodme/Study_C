#include <stdio.h>

// Hp����

void Potion(int* Hp, int AddValue) // int* Hp = &characterHp
{
	*Hp += AddValue;
	printf("����� ü���� %d��ŭ ����մϴ�.\n", AddValue);
}

int main()
{
	int characterHp = 100;

	printf("���Ͱ� �Ѵ� ���Ƚ��ϴ�.\n");
	characterHp -= 10;
	printf("����� ������ ����մϴ�.\n");
	Potion(&characterHp, 10);
	printf("����� ü���� %d�Դϴ�.\n", characterHp);



	return 0;
}