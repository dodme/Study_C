#include <stdio.h>

// ���� ����
/// - ���� ������ ������� �����Դϴ�.
/// - enum Ű���带 ����մϴ�.

// ���� ���� ����
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