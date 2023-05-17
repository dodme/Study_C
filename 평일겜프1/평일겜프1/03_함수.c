#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

// RPG
typedef enum CharacterJob
{
	°¡ºØÀÌ,
	¼¼ºØÀÌ,
	¶÷ºØÀÌ,
	¿ìºØÀÌ,
} C_Job;

typedef enum MonsterType
{
	Çª¸¥ÆÄ¼ö²Û,
	ºÓÀºµ¢ÄğÁ¤·É,
	µå·¡°ï
}M_Job;

// ³­¼öÃßÃâ À¯Æ¿ÇÔ¼ö
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

	C_Job player = °¡ºØÀÌ;
	int playerHp = 0;
	int playerDamage = 0;

	M_Job monster = Çª¸¥ÆÄ¼ö²Û;
	int monsterHp = 0;
	int monsterDamage = 0;

	return 0;
}