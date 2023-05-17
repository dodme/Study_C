#pragma once
#include <stdbool.h>
#include "CharacterController.h"
#include "MonsterController.h"

void Attack(Character* player, Monster* monster, bool isPlayerToMonster);

void DelayAndClear()
{
	_sleep(3000);
	system("cls");
}