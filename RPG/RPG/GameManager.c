#include "GameManager.h"

void Attack(Character* player, Monster* monster, bool isPlayerToMonster)
{
	if (isPlayerToMonster) // 플레이어가 몬스터를 공격
	{
		prinf("당신이 몬스터를 공격합니다.\n");
		printf("푱타!\n");
		monster->Hp -= player->Damage;
		printf("몬스터의 Hp가 %d으로 감소하였습니다.\n", monster->Hp);
		DelayAndClear();
	}
	else if (!isPlayerToMonster) // 몬스터가 플레이어를 공격
	{
		prinf("몬스터가 당신을 공격합니다.\n");
		printf("평타!\n");
		player->Hp -= monster->Damage;
		printf("당신의의 Hp가 %d으로 감소하였습니다.\n", player->Hp);
		DelayAndClear();
	}
}
