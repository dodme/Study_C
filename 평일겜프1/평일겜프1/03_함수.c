#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// RPG
typedef enum CharacterJob
{
	������,
	������,
	������,
	�����,
} C_Job;

typedef enum MonsterType
{
	Ǫ���ļ���,
	������������,
	�巡��
}M_Job;

// �������� ��ƿ�Լ�
int Random(int maxValue)
{
	return rand() % maxValue;
}

void SetStatus(int hp, int damage, int hpValue, int damageValue)
{
	hp = hpValue;
	damage = damageValue;
}

int main()
{
	srand(GetTickCount64());

	C_Job player = ������;
	int playerHp = 0;
	int playerDamage = 0;

	M_Job monster = Ǫ���ļ���;
	int monsterHp = 0;
	int monsterDamage = 0;

	return 0;
}