#include "CharacterController.h"
#include "MonsterController.h"

int main()
{
	Character player;
	SetNickName(&player);
	_SetJob(&player);

	Monster monster;
	SetMonsterStatus(&monster);

	while (1)
	{
		Attack(&player, &monster, true);

		if (Random(100) > 50)
		{
			Attack(&player, &monster, false);
		}

		if (player.Hp <= 0)
		{
			printf("����� �й��Դϴ�.\n");
			return 0;
		}
		else if (monster.Hp <= 0)
		{
			printf("����� �¸��Դϴ�.\n");
			return 0;
		}
	}


	return 0;
}