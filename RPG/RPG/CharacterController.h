#pragma once
#include "inlcuding.h"
#include "MonsterController.h"
#include "GameManager.h"

typedef enum
{
	전사,
	마법사,
	궁수
}CharacterJob;

typedef struct
{
	CharacterJob Job;
	char NickName[256];

	int level = 1;
	int Hp;
	int Damage;

	char FirstSkillName[256];
	char SecondSkillName[256];

	int FirstSkillDamage;
	int SecondSkillDamage;

}Character;

void SetNickName(Character* player);
void PrintNickName(Character player);

void _SetJob(Character* player);
void PrintJob(Character player);

void SetStatus(Character* player, int hp, int damage);
void PrintStatus(Character player);

void SetSkill(Character* player);
void PrintSkill(Character player);

void UseFirstSkill(Character* player, Monster* monster);
void UseSecondSkill(Character* player, Monster* monster);