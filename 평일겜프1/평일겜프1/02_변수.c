#include <stdio.h>


int main()
{
	// ī�� ǥ���			: characterHp - ����
	// �Ľ�Į ǥ���		: CharacterHp - �Լ�


	// character �� Hp Damage
	int characterHp = 100;
	float character_Damage = 10.0f;

	// monsterHp Damage
	int monsterHp = 50;
	float monster_Damage = 5.0f;

	printf("����� ĳ���Ͱ� ���͸� �����մϴ�. \n");
	printf("������ Hp�� %.2f ��ŭ �����߽��ϴ�. \n", character_Damage);
	monsterHp = monsterHp - character_Damage;
	printf("���� ������ Hp�� %d �Դϴ�.\n", monsterHp);

	printf("\n");

	printf("���Ͱ� �ݰ��մϴ�. \n");
	printf("���Ͱ� ĳ���Ϳ��� %.2f ��ŭ ���ظ� �����ϴ�. \n", monster_Damage);
	characterHp = characterHp - monster_Damage;
	printf("���� ����� ĳ���� Hp �� %d �Դϴ�.\n", characterHp);


	return 0;
}