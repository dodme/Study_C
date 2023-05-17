#include <stdio.h>

// Hp포션

void Potion(int* Hp, int AddValue) // int* Hp = &characterHp
{
	*Hp += AddValue;
	printf("당신의 체력이 %d만큼 상승합니다.\n", AddValue);
}

int main()
{
	int characterHp = 100;

	printf("몬스터가 한대 떄렸습니다.\n");
	characterHp -= 10;
	printf("당신이 포션을 사용합니다.\n");
	Potion(&characterHp, 10);
	printf("당신의 체력이 %d입니다.\n", characterHp);



	return 0;
}