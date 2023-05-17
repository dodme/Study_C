#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

typedef enum
{
	전사,
	마법사,
	궁수
}CharacterJob, Job;

typedef unsigned int uint;

typedef struct
{
	char nickName[256];
	int hp;
	int damage;
	Job job;
}Character;

void SetCharacterInfo(Character player, const char str[], int hp, int damage, Job job)
{
	strcpy(player.nickName, str);
	player.hp = hp;
	player.damage = damage;
	player.job = job;
}

void PrintCharacterInfo(Character player)
{
	printf("당신의 닉네임은 : %s입니다.\n", player.nickName);
	printf("당신의 현재 체력은 : %d입니다.\n", player.hp);
	printf("당신의 현재 공격력은 : %d입니다.\n", player.damage);
	
	switch (player.job)
	{
	case 전사:
		printf("당신의 직업은 전사입니다.\n");
		break;
	case 마법사:
		printf("당신의 직업은 마법사입니다.\n");
		break;
	case 궁수:
		printf("당신의 직업은 궁수입니다.\n");
		break;
	}
}

int main()
{
	
	Character player;
	SetCharacterInfo(player, "김민자", 100, 10, 전사);
	PrintCharacterInfo(player);

	return 0;
}

// 문제1. 학생의 성적정보(학생의 이름, 국어점수, 영어점수, 수학점수)를
//        가지는 구조체를 만들고,
//        3명의 학생의 이름과 성적을 입력받아 출력하세요

// 아이템 Data Base를 만듭니다.
// Items 구조체를 정의하고,
// 멤버에는 아이템이름, 아이템에 대한 설멍
// 해서 게임 도중 몬스터를 잡으면 아이템을 일정 확률로 떨어뜨리는데,
// 떨어뜨린 아이템을 드랍 하세요