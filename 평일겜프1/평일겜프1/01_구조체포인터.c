#include <stdio.h>
#include <stdbool.h>

typedef struct
{
	int Hp;
	int Damage;
}Character;

typedef struct
{
	int Hp;
	int Damage;
}Monster;

void Attack(Character* player, Monster* monster, bool playerToMonster)
{
	if (playerToMonster) // �÷��̾ ���͸� ����
	{
		printf("����� ���͸� �����մϴ�.\n");
		monster->Hp -= player->Damage;
		printf("���Ͱ� �����մϴ�.\n");
		printf("������ ����ü���� %d�� �����Ͽ����ϴ�.\n", monster->Hp);
	}
	else if (!playerToMonster) // ���Ͱ� �÷��̾ ����
	{
		printf("���Ͱ� ����� �����մϴ�.\n");
		player->Hp -= monster->Damage;
		printf("����� �����մϴ�.\n");
		printf("����� ����ü���� %d�� �����Ͽ����ϴ�.\n", player->Hp);
	}
}

void SetCharacterStatus(Character* player, int hp, int damage)
{
	player->Hp = hp;
	player->Damage = damage;
}

void SetMonsterStatus(Monster* monster, int hp, int damage)
{
	monster->Hp = hp;
	monster->Damage = damage;
}

int main()
{
	//bool b = true;
	//b = false;
	//b = 0;
	//printf("%d\n", b);


	Character player;
	SetCharacterStatus(&player, 10000, 100000);
	Monster monster;
	SetMonsterStatus(&monster, 10000000, 1000000000);

	Attack(&player, &monster, true);
	Attack(&player, &monster, false);


	return 0;
}


// ����
/// ����ڿ��� ���ڿ��� �Է¹ް�, ������ �Է� �޾�
/// ������ŭ �ڷ� �и� ���ڿ��� ����ϼ���.

// ex) ABC 2 -> CDE
// ex) BBB 3 -> EEE


// ����!
/// ���ڿ��� �Ųٷ� �������!
/// ����ڿ��� ���ڿ��� �Է¹޾�
/// �� ���ڿ��� �Ųٷ� ����ϼ���
// ex) asdf -> fdsa
// ex) Hello World! -? !dlroW olleH

// ����2
/// ��� ���� ����ϱ�!
/// ���ڿ��� �Է¹ް�,
// ex) ABC -> B
// ex) ABCD -> BC

