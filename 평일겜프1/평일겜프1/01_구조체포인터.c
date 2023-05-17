#include <stdio.h>
#include <stdbool.h>

typedef struct
{
	int Hp;
	int Damage;
}Character;

typedef struct
{
	int Hp;
	int Damage;
}Monster;

void Attack(Character* player, Monster* monster, bool playerToMonster)
{
	if (playerToMonster) // 플레이어가 몬스터를 공격
	{
		printf("당신이 몬스터를 공격합니다.\n");
		monster->Hp -= player->Damage;
		printf("몬스터가 아파합니다.\n");
		printf("몬스터의 현재체력이 %d로 감소하였습니다.\n", monster->Hp);
	}
	else if (!playerToMonster) // 몬스터가 플레이어를 공격
	{
		printf("몬스터가 당신을 공격합니다.\n");
		player->Hp -= monster->Damage;
		printf("당신이 아파합니다.\n");
		printf("당신의 현재체력이 %d로 감소하였습니다.\n", player->Hp);
	}
}

void SetCharacterStatus(Character* player, int hp, int damage)
{
	player->Hp = hp;
	player->Damage = damage;
}

void SetMonsterStatus(Monster* monster, int hp, int damage)
{
	monster->Hp = hp;
	monster->Damage = damage;
}

int main()
{
	//bool b = true;
	//b = false;
	//b = 0;
	//printf("%d\n", b);


	Character player;
	SetCharacterStatus(&player, 10000, 100000);
	Monster monster;
	SetMonsterStatus(&monster, 10000000, 1000000000);

	Attack(&player, &monster, true);
	Attack(&player, &monster, false);


	return 0;
}


// 문제
/// 사용자에게 문자열을 입력받고, 정수도 입력 받아
/// 정수만큼 뒤로 밀린 문자열을 출력하세요.

// ex) ABC 2 -> CDE
// ex) BBB 3 -> EEE


// 숙제!
/// 문자열을 거꾸로 뒤집어라!
/// 사용자에게 문자열을 입력받아
/// 그 문자열을 거꾸로 출력하세요
// ex) asdf -> fdsa
// ex) Hello World! -? !dlroW olleH

// 숙제2
/// 가운데 문자 출력하기!
/// 문자열을 입력받고,
// ex) ABC -> B
// ex) ABCD -> BC

