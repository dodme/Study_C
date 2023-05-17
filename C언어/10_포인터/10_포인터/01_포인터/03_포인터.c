#include <stdio.h>

// void * 형식
/// - 여러 형식의 변수를 가리킬 수 있습니다.

int main()
{
	int number = 10;

	// void* 형식 변수를 선언합니다.
	void* p;
	/// - void* : 가리키는 변수의 자료형을 결정하지 않겠다는 의미
	/// - 해당 포인터 변수를 이용하여 모든 형식의 변수를 가리킬 수 있지만,
	///   가리키는 변수의 자료형이 결정되지 않았기 때문에 간접 참조 연산이 불가능합니다.


	// 포인터 변수 p 가 number 를 가리키도록 합니다.
	p = &number;

	printf("*p = %d \n", (*(int*)p));
	/// - void* 형식 변수를 이용하여 간접 참조를 진행할 때
	///   명시적인 형변환이 필요합니다.

	return 0;
}