#include <stdio.h>


int main()
{
	// 카멜 표기법			: characterHp - 변수
	// 파스칼 표기법		: CharacterHp - 함수


	// character 의 Hp Damage
	int characterHp = 100;
	float character_Damage = 10.0f;

	// monsterHp Damage
	int monsterHp = 50;
	float monster_Damage = 5.0f;

	printf("당신의 캐릭터가 몬스터를 공격합니다. \n");
	printf("몬스터의 Hp가 %.2f 만큼 감소했습니다. \n", character_Damage);
	monsterHp = monsterHp - character_Damage;
	printf("현재 몬스터의 Hp는 %d 입니다.\n", monsterHp);

	printf("\n");

	printf("몬스터가 반격합니다. \n");
	printf("몬스터가 캐릭터에게 %.2f 만큼 피해를 입힙니다. \n", monster_Damage);
	characterHp = characterHp - monster_Damage;
	printf("현재 당신의 캐릭터 Hp 는 %d 입니다.\n", characterHp);


	return 0;
}