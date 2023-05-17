#pragma once
#include "inlcuding.h"
#include "GameManager.h"

typedef enum
{
	���,
	�����,
	�𵥵�,
}MonsterType;

typedef struct
{
	MonsterType monsterType = ���;
	int Hp;
	int Damage;
}Monster;

int Random(int maxCount)
{
	return  (rand() % maxCount) + 1;
}

void SetMonsterStatus(Monster* monster);
void SetMonsterType(Monster* monster);

void PrintMonsterInfo(Monster monster);


