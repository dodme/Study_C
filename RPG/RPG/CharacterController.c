#include "CharacterController.h"

void SetNickName(Character* player)
{
	printf("Ű�̳� ��������...?\n");
	gets(player->NickName);
	printf("�� ���� �̸��̿���!\n");
	PrintNickName(*player);
}

void PrintNickName(Character player)
{
	printf("����� �̸��� %s�̱���!\n", player.NickName);
}

void _SetJob(Character* player)
{
	int inputNumber = { 0 };


	while (1)
	{
		DelayAndClear();


		printf("����! ������ ���� �����Ͻðھ��>\n");
		printf("���߿� �ϳ��� ������~!\n");
		printf("1.���� 2.������ 3.�ü�\n");
		scanf("%d", &inputNumber);

		switch (inputNumber)
		{
		case 1:
			player->Job = ����;
			PrintJob(*player);
			SetStatus(player, 300, 30);
			SetSkill(player);
			return;

		case 2:
			player->Job = ������;
			PrintJob(*player);
			SetStatus(player, 100, 70);
			SetSkill(player);
			return;

		case 3:
			player->Job = �ü�;
			PrintJob(*player);
			SetStatus(player, 200, 50);
			SetSkill(player);
			return;

		default:
			printf("�ٽ� ���� ���ּ���!~\n");
			continue;
		}
	}
}

void PrintJob(Character player)
{
	char str[256] = 0;

	switch (player.Job)
	{
	case ����:
		strcpy(str, "����");
		break;

	case ������:
		strcpy(str, "������");
		break;

	case �ü�:
		strcpy(str, "�ü�");
		break;

	default:
		break;
	}

	printf("����� ������ ŷ��¯ ���� %s�׿�!\n", str);
}

void SetStatus(Character* player, int hp, int damage)
{
	player->Hp = hp;
	player->Damage = damage;
	PrintStatus(*player);
}

void PrintStatus(Character player)
{
	printf("����� ü���� : %d�Դϴ�.\n", player.Hp);
	printf("����� ���ݷ��� : %d�Դϴ�.\n", player.Damage);
	DelayAndClear();
}

void SetSkill(Character* player)
{
	switch (player->Job)
	{
	case ����:
		strcpy(player->FirstSkillName, "�����þ�");
		strcpy(player->SecondSkillName, "�켭��");
		player->FirstSkillDamage = 100;
		player->SecondSkillDamage = 70;
		break;

	case ������:
		strcpy(player->FirstSkillName, "��Ȥ");
		strcpy(player->SecondSkillName, "��ȥ��");
		player->FirstSkillDamage = 50;
		player->SecondSkillDamage = 500;
		break;

	case �ü�:
		strcpy(player->FirstSkillName, "��ȭ��");
		strcpy(player->SecondSkillName, "����");
		player->FirstSkillDamage = 100;
		player->SecondSkillDamage = 200;
		break;
	}
	PrintSkill(*player);
}

void PrintSkill(Character player)
{
	printf("����� ������ ���� ��ų�� : %s,\n %s�� �ֽ��ϴ�.\n", player.FirstSkillName, player.SecondSkillName);
	DelayAndClear();
}

void UseFirstSkill(Character* player, Monster* monster)
{
	printf("����� %s�� ����մϴ�.\n", player->FirstSkillName);
	monster->Hp -= player->FirstSkillDamage;
	printf("������ HP�� %d�� �����Ͽ����ϴ�.\n", monster->Hp);
	DelayAndClear();
}

void UseSecondSkill(Character* player, Monster* monster)
{
	printf("����� %s�� ����մϴ�.\n", player->SecondSkillName);
	monster->Hp -= player->SecondSkillDamage;
	printf("������ HP�� %d�� �����Ͽ����ϴ�.\n", monster->Hp);
	DelayAndClear();
}
