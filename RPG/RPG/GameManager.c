#include "GameManager.h"

void Attack(Character* player, Monster* monster, bool isPlayerToMonster)
{
	if (isPlayerToMonster) // �÷��̾ ���͸� ����
	{
		prinf("����� ���͸� �����մϴ�.\n");
		printf("�yŸ!\n");
		monster->Hp -= player->Damage;
		printf("������ Hp�� %d���� �����Ͽ����ϴ�.\n", monster->Hp);
		DelayAndClear();
	}
	else if (!isPlayerToMonster) // ���Ͱ� �÷��̾ ����
	{
		prinf("���Ͱ� ����� �����մϴ�.\n");
		printf("��Ÿ!\n");
		player->Hp -= monster->Damage;
		printf("������� Hp�� %d���� �����Ͽ����ϴ�.\n", player->Hp);
		DelayAndClear();
	}
}
