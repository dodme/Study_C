// Ctirl + A, Ctrl + M + M : ��� ������ ��� �ڵ� ���

// ��ó����
/// - �������� ������ ������ �̸� ó���Ǵ� ������ �ǹ��մϴ�.

// #include : ������ ������ ������ �о�� �����ڰ� �ִ� ���Ͽ� ���Խ�ŵ�ϴ�.
// #include <����> or "����"
// ����� ���� ��� : "����"
// �����Ǵ� ��� : <����>
#include <stdio.h>

// #define : �ɺ�, ��ũ�� ��� / �Լ� �����մϴ�.
#define DEBUG
#define RELEASE
/// - �ɺ� DEBUG, RELEASE �� �����մϴ�.

// ��ũ�� ����� �����մϴ�.
#define PI 3.14f
/// - 3.14f �� PI Ű����� �����մϴ�.

// ��ũ�� �Լ��� �����մϴ�.
// ���� �켱���������� ������ �Ű����� x, y�� ��ȣ�� �����ش�.
#define Multiply(x, y) ((x) * (y))

// #ifdef				: �ɺ�, ��ũ�� ��� / �Լ��� ���ǵǾ��ִ��� Ȯ���մϴ�.
// #ifnotdef			: �ɺ�, ��ũ�� ��� / �Լ��� ���ǵǾ����� ������ Ȯ���մϴ�.
// #if, #elif, #else	: ������ ��Ÿ���ϴ�.
/// - �� ������ ����Ѵٸ� �׻� #endif �� ������ �մϴ�.

#ifdef DEBUG
// DEBUG �ɺ��� ���ǵǾ��ִٸ� ������

// DEBUG �ɺ��� ���� �����մϴ�.
#undef DEBUG
#endif

#define ANDROID 0x0001
#define IOS 0x0001
#define PLATFORM ANDROID

void print_platform()
{
#if PLATFORM == ANDROID
	printf("������ �÷����� Android �Դϴ�. \n");
#elif PLATFORM == IOS
	printf("������ �÷����� IOS �Դϴ�. \n");
#endif
}

// #pragma : �����Ϸ��� ����� Ȯ���ų �� �ֵ��� �ϴ� �������Դϴ�.
/// - #pragma once : �����Ϸ����� �ش� �ش������� �� ���� ���Եǵ��� �մϴ�.
/// - #pragma warning(disable : code) : ������ code �� ��� �����մϴ�.
/// - #pragma comment() : Ư���� ���̺귯���� ��ũ��Ű�� ����� �մϴ�.
/// - #pragma region / #pragma endregion : Ȯ�� / ��� ������ �ڵ� ����� �����մϴ�.

#pragma region �������� �����մϴ�.
int main()
{
	printf("PI = %2.f \n", PI);
	printf("10 * 2 = %d \n", Multiply(10, 2));

	print_platform();

	return 0;
}
#pragma endregion

