#include <stdio.h>

// 열거 형식
/// - 서로 연관된 상수들의 집합입니다.
/// - enum 키워드를 사용합니다.

// 열거 형식 선언
enum WeaponType 
{
	SWORD	= 10, 
	BOW		= 20
};

int main()
{

	enum tag_WeaponType weapon_sword = SWORD;
	enum tag_WeaponType weapon_bow = BOW;

	printf("weapon_sword = %d \n", weapon_sword);
	printf("weapon_bow = %d \n", weapon_bow);

	return 0;
}