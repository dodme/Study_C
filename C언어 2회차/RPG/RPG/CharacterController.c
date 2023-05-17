#include "CharacterController.h"

void SetNickName(Character* player)
{
	printf("키미노 나마에와...?\n");
	gets(player->NickName);
	printf("참 멋진 이름이에요!\n");
	PrintNickName(*player);
}

void PrintNickName(Character player)
{
	printf("당신의 이름은 %s이군요!\n", player.NickName);
}

void _SetJob(Character* player)
{
	int inputNumber = { 0 };


	while (1)
	{
		DelayAndClear();


		printf("용사님! 직업은 뭐로 결정하시겠어요>\n");
		printf("셋중에 하나만 골라봐요~!\n");
		printf("1.전사 2.마법사 3.궁수\n");
		scanf("%d", &inputNumber);

		switch (inputNumber)
		{
		case 1:
			player->Job = 전사;
			PrintJob(*player);
			SetStatus(player, 300, 30);
			SetSkill(player);
			return;

		case 2:
			player->Job = 마법사;
			PrintJob(*player);
			SetStatus(player, 100, 70);
			SetSkill(player);
			return;

		case 3:
			player->Job = 궁수;
			PrintJob(*player);
			SetStatus(player, 200, 50);
			SetSkill(player);
			return;

		default:
			printf("다시 설정 해주세요!~\n");
			continue;
		}
	}
}

void PrintJob(Character player)
{
	char str[256] = 0;

	switch (player.Job)
	{
	case 전사:
		strcpy(str, "전사");
		break;

	case 마법사:
		strcpy(str, "마법사");
		break;

	case 궁수:
		strcpy(str, "궁수");
		break;

	default:
		break;
	}

	printf("당신의 직업은 킹왕짱 멋진 %s네요!\n", str);
}

void SetStatus(Character* player, int hp, int damage)
{
	player->Hp = hp;
	player->Damage = damage;
	PrintStatus(*player);
}

void PrintStatus(Character player)
{
	printf("당신의 체력은 : %d입니다.\n", player.Hp);
	printf("당신의 공격력은 : %d입니다.\n", player.Damage);
	DelayAndClear();
}

void SetSkill(Character* player)
{
	switch (player->Job)
	{
	case 전사:
		strcpy(player->FirstSkillName, "데마시아");
		strcpy(player->SecondSkillName, "녹서스");
		player->FirstSkillDamage = 100;
		player->SecondSkillDamage = 70;
		break;

	case 마법사:
		strcpy(player->FirstSkillName, "매혹");
		strcpy(player->SecondSkillName, "진혼곡");
		player->FirstSkillDamage = 50;
		player->SecondSkillDamage = 500;
		break;

	case 궁수:
		strcpy(player->FirstSkillName, "은화살");
		strcpy(player->SecondSkillName, "선고");
		player->FirstSkillDamage = 100;
		player->SecondSkillDamage = 200;
		break;
	}
	PrintSkill(*player);
}

void PrintSkill(Character player)
{
	printf("당신의 직업이 가진 스킬은 : %s,\n %s가 있습니다.\n", player.FirstSkillName, player.SecondSkillName);
	DelayAndClear();
}

void UseFirstSkill(Character* player, Monster* monster)
{
	printf("당신이 %s를 사용합니다.\n", player->FirstSkillName);
	monster->Hp -= player->FirstSkillDamage;
	printf("몬스터의 HP가 %d로 감소하였습니다.\n", monster->Hp);
	DelayAndClear();
}

void UseSecondSkill(Character* player, Monster* monster)
{
	printf("당신이 %s를 사용합니다.\n", player->SecondSkillName);
	monster->Hp -= player->SecondSkillDamage;
	printf("몬스터의 HP가 %d로 감소하였습니다.\n", monster->Hp);
	DelayAndClear();
}
