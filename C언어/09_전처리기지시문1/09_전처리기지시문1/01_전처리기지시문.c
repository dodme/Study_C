// Ctirl + A, Ctrl + M + M : 축소 가능한 모든 코드 축소

// 전처리문
/// - 실질적인 컴파일 이전에 미리 처리되는 문장을 의미합니다.

// #include : 지정한 파일의 내용을 읽어와 지시자가 있는 파일에 포함시킵니다.
// #include <파일> or "파일"
// 사용자 정의 헤더 : "파일"
// 제공되는 헤더 : <파일>
#include <stdio.h>

// #define : 심볼, 매크로 상수 / 함수 정의합니다.
#define DEBUG
#define RELEASE
/// - 심볼 DEBUG, RELEASE 를 정의합니다.

// 매크로 상수를 정의합니다.
#define PI 3.14f
/// - 3.14f 를 PI 키워드로 정의합니다.

// 매크로 함수를 정의합니다.
// 연산 우선순위때문에 각각의 매개변수 x, y는 괄호로 묶어준다.
#define Multiply(x, y) ((x) * (y))

// #ifdef				: 심볼, 매크로 상수 / 함수가 정의되어있는지 확인합니다.
// #ifnotdef			: 심볼, 매크로 상수 / 함수가 정의되어있지 않은지 확인합니다.
// #if, #elif, #else	: 조건을 나타냅니다.
/// - 위 구문을 사용한다면 항상 #endif 로 끝나야 합니다.

#ifdef DEBUG
// DEBUG 심볼이 정의되어있다면 컴파일

// DEBUG 심볼을 정의 해제합니다.
#undef DEBUG
#endif

#define ANDROID 0x0001
#define IOS 0x0001
#define PLATFORM ANDROID

void print_platform()
{
#if PLATFORM == ANDROID
	printf("설정된 플랫폼이 Android 입니다. \n");
#elif PLATFORM == IOS
	printf("설정된 플랫폼이 IOS 입니다. \n");
#endif
}

// #pragma : 컴파일러의 기능을 확장시킬 수 있도록 하는 지시자입니다.
/// - #pragma once : 컴파일러에게 해당 해더파일이 한 번만 포함되도록 합니다.
/// - #pragma warning(disable : code) : 지정한 code 의 경고를 무시합니다.
/// - #pragma comment() : 특정한 라이브러리를 링크시키는 기능을 합니다.
/// - #pragma region / #pragma endregion : 확장 / 축소 가능한 코드 블록을 생성합니다.

#pragma region 진입점을 정의합니다.
int main()
{
	printf("PI = %2.f \n", PI);
	printf("10 * 2 = %d \n", Multiply(10, 2));

	print_platform();

	return 0;
}
#pragma endregion

