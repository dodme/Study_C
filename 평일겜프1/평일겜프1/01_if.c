#include <stdio.h>

// 분기문

// If문 / 조건문
/// 만약에 ~ 라면
/// if(조건식)
/// {
///		조건식이 참일때만 실행할 코드;
/// }



int main()
{
	int characterHp = 100;
	int damage = 10;

	printf("당신이 몬스터에게 공격을 당했습니다.\n");
	characterHp -= damage;

	if (characterHp > 0)
	{
		printf("당신은 살아 있습니다.\n");
	}

	printf("실행");



	return 0;
}