#include "MonsterController.h"

void SetMonsterStatus(Monster* monster)
{
	SetMonsterType(monster);
	switch (monster->monsterType)
	{
	case ���:
		monster->Hp = 50;
		monster->Damage = 10;
		break;

	case �����:

		monster->Hp = 100;
		monster->Damage = 20;
		break;

	case �𵥵�:

		monster->Hp = 1000;
		monster->Damage = 1;
		break;
	}
	PrintMonsterInfo(*monster);
}

void SetMonsterType(Monster* monster)
{
	srand(GetTickCount64());

	switch (Random(3))
	{
	case 1:
		monster->monsterType = ���;
		break;

	case 2:
		monster->monsterType = �����;
		break;

	case 3:
		monster->monsterType = �𵥵�;
		break;
	}
}

void PrintMonsterInfo(Monster monster)
{
	switch (monster.monsterType)
	{
	case ���:
		printf("�߻��� ����� �����Ͽ���!\n");
		printf("�״��� ���غ����� �ʴ´�..\n");
		printf("�������ͽ��� �ѹ� ������?\n");
		printf("ü�� : %d\n", monster.Hp);
		printf("���ݷ� : %d\n", monster.Damage);
		printf("ȣ��..�������� ������..ȣ��ȣ��\n");
		printf("(feat.������)\n");
		break;

	case �����:
		printf("�߻��� ����Ű� �����Ͽ���!\n");
		printf("�������ΰ�?\n");
		printf("�������ͽ��� �ѹ� ������?\n");
		printf("ü�� : %d\n", monster.Hp);
		printf("���ݷ� : %d\n", monster.Damage);
		printf("īī��Ʈ...?\n");
		printf("(feat.������)\n");
		break;

	case �𵥵�:
		printf("�߻��� ����׸� �θ� �𵥵尡 �����Ͽ���!\n");
		printf("�״��� ���غ����� �ʴ´�..\n");
		printf("�������ͽ��� �ѹ� ������?\n");
		printf("ü�� : %d\n", monster.Hp);
		printf("���ݷ� : %d\n", monster.Damage);
		printf("�����ĤĤĤ�??? ü�� ȥ��?\n");
		printf("(feat.�����ڻ翡�� ���� ����Ʋ��)\n");
		break;
	}
	DelayAndClear();
}
