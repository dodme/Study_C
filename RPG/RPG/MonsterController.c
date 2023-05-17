#include "MonsterController.h"

void SetMonsterStatus(Monster* monster)
{
	SetMonsterType(monster);
	switch (monster->monsterType)
	{
	case 고블린:
		monster->Hp = 50;
		monster->Damage = 10;
		break;

	case 오우거:

		monster->Hp = 100;
		monster->Damage = 20;
		break;

	case 언데드:

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
		monster->monsterType = 고블린;
		break;

	case 2:
		monster->monsterType = 오우거;
		break;

	case 3:
		monster->monsterType = 언데드;
		break;
	}
}

void PrintMonsterInfo(Monster monster)
{
	switch (monster.monsterType)
	{
	case 고블린:
		printf("야생의 고블린이 출현하였다!\n");
		printf("그다지 강해보이지 않는다..\n");
		printf("스테이터스를 한번 봐볼까?\n");
		printf("체력 : %d\n", monster.Hp);
		printf("공격력 : %d\n", monster.Damage);
		printf("호오..전투력이 낮군요..호후호후\n");
		printf("(feat.프리저)\n");
		break;

	case 오우거:
		printf("야생의 오우거가 출현하였다!\n");
		printf("보스몹인가?\n");
		printf("스테이터스를 한번 봐볼까?\n");
		printf("체력 : %d\n", monster.Hp);
		printf("공격력 : %d\n", monster.Damage);
		printf("카카로트...?\n");
		printf("(feat.베지터)\n");
		break;

	case 언데드:
		printf("야생의 워모그를 두른 언데드가 출현하였다!\n");
		printf("그다지 강해보이지 않는다..\n");
		printf("스테이터스를 한번 봐볼까?\n");
		printf("체력 : %d\n", monster.Hp);
		printf("공격력 : %d\n", monster.Damage);
		printf("에에ㅔㅔㅔㅔ??? 체력 혼또?\n");
		printf("(feat.문도박사에게 물린 케이틀린)\n");
		break;
	}
	DelayAndClear();
}
