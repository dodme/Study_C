#include <stdio.h>

// 전역변수
/// - 함수 밖에 선언되며, 지역성을 띄는 다른 지역 변수와 다르게
///   지역성을 갖지 않는 변수를 의미합니다.
/// - 데이터 영역에 할당됩니다.
/// - 초기화 시키지 않아도 0 이라는 값으로 초기화됩니다.

// 전역 변수를 선언합니다.
int globalVariable;

// 외부 파일에 선언된 myVariable 전역 변수를 사용합니다.
extern int myVariable;
/// - extern : 다음에 선언되는 변수가 외부 파일에 있는 변수임을 명시합니다.

// 외부 파일에 정의된 함수를 선언합니다.
/// 함수는 extern을 선언해도 되고 안해도 된다.
void print_my_variable();

int main()
{
	// 전역 변수는 모든 함수에서 사용할 수 있습니다.
	// globalVariable = 10;

	printf("globalVariable = %d \n", globalVariable);
	print_my_variable();
	//printf("myVariable = %d \n", myVariable);

	return 0;
}