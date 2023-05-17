#pragma warning (disable : 4996)

#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef unsigned int uint;

typedef struct tag_Monster
{
	char name[256];
	float hp;
	float atk;
	uint level;
} Monster;

int main()
{
	Monster goblin1;
	strcpy(goblin1.name, "Goblin");
	goblin1.hp = 100.0f;
	goblin1.atk = 3.5f;
	goblin1.level = 5;

	Monster goblin2 = goblin1;
	// 구조체 형식 변수를 대상으로 대입 연산자가 사용된 경우
	// 오른쪽 피연산자 멤버의 값이 왼쪽 피연산자의 멤버의 값으로
	// 복사됩니다.
	strcpy(goblin2.name, "Goblin2");


	printf("goblin1.name = %s \n", goblin1.name);
	printf("hp : %.2f \n", goblin1.hp);
	printf("atk : %.2f \n", goblin1.atk);
	printf("level : %d \n", goblin1.level);

	printf("goblin2.name = %s \n", goblin2.name);
	printf("hp : %.2f \n", goblin2.hp);
	printf("atk : %.2f \n", goblin2.atk);
	printf("level : %d \n", goblin2.level);

	// 콘솔 화면 지우기
	system("cls");

	return 0;
}