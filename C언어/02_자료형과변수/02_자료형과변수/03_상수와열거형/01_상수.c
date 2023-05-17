#include <stdio.h>

// 상수
/// - 저장된 값을 변경할 수 없는 메모리 공간
/// - 변수처럼 선언하되, 형식 앞에 const 키워드를 붙여 선언합니다.


int main()
{
	// 상수를 선언합니다.
	const float PI = 3.141592f;
	// PI = 3.14f;
	/// - 선언 후 값을 정의할 수 없습니다.
	printf("PI = %f \n", PI);



	return 0;
}