#pragma once
#include "inlcuding.h"
#include "GameManager.h"

typedef enum
{
	고블린,
	오우거,
	언데드,
}MonsterType;

typedef struct
{
	MonsterType monsterType = 고블린;
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


