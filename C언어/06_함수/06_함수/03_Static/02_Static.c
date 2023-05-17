#include <stdio.h>

// 정적 전역 변수를 선언합니다.
static int my_global_variable;
/// - 해당 파일 내부에서만 사용할 수 있게 됩니다.
///   (외부 파일에서 extern 으로 사용될 수 없습니다.)

// 정적 함수를 정의합니다.
/// - 정적 함수는 해당 파일 내부에서만 사용할 수 있습니다.
static void hello_world() { }

int main()
{



	return 0;
}