#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

typedef enum
{
	����,
	������,
	�ü�
}CharacterJob, Job;

typedef unsigned int uint;

typedef struct
{
	char nickName[256];
	int hp;
	int damage;
	Job job;
}Character;

void SetCharacterInfo(Character player, const char str[], int hp, int damage, Job job)
{
	strcpy(player.nickName, str);
	player.hp = hp;
	player.damage = damage;
	player.job = job;
}

void PrintCharacterInfo(Character player)
{
	printf("����� �г����� : %s�Դϴ�.\n", player.nickName);
	printf("����� ���� ü���� : %d�Դϴ�.\n", player.hp);
	printf("����� ���� ���ݷ��� : %d�Դϴ�.\n", player.damage);
	
	switch (player.job)
	{
	case ����:
		printf("����� ������ �����Դϴ�.\n");
		break;
	case ������:
		printf("����� ������ �������Դϴ�.\n");
		break;
	case �ü�:
		printf("����� ������ �ü��Դϴ�.\n");
		break;
	}
}

int main()
{
	
	Character player;
	SetCharacterInfo(player, "�����", 100, 10, ����);
	PrintCharacterInfo(player);

	return 0;
}

// ����1. �л��� ��������(�л��� �̸�, ��������, ��������, ��������)��
//        ������ ����ü�� �����,
//        3���� �л��� �̸��� ������ �Է¹޾� ����ϼ���

// ������ Data Base�� ����ϴ�.
// Items ����ü�� �����ϰ�,
// ������� �������̸�, �����ۿ� ���� ����
// �ؼ� ���� ���� ���͸� ������ �������� ���� Ȯ���� ����߸��µ�,
// ����߸� �������� ��� �ϼ���