#include <stdio.h>

int main()
{
	int number1 = 10;
	int number2 = 20;

	// 포인터 형식 앞에 const 가 사용된다면 포인터 변수가 가리키는 변수는 변경할 수 있지만,
	// 간접 참조를 통하여 변수의 값을 변경할 수 업습니다.
	const int* p1 = &number1;
	p1 = &number1;

	// 간접 참조를 통한 값 쓰기 불가능
	// (*p1) = 100;

	// 포인터 형식 뒤에 const 가 붙는다면 포인터 변수가 갖는 값을 상수화 시킵니다.
	// 포인터 변수가 가리키는 변수를 변경할 수 없습니다.
	int* const p2 = &number1;

	// 포인터 변수가 가리키는 변수 변경 불가능
	// p2 = &number;

	// 간접참조를 통한 값 쓰기 가능
	*p2 += 100;

	printf("*p2 = %d \n", *p2);
	printf("number1 = %d \n", number1);

	// 형식 앞 뒤에 const 가 붙는다면,
	// 포인터 변수의 값을 변경할 수 없게 되며,
	// 포인터 변수가 가리키는 변수의 값도 변경할 수 없게 됩니다.
	const int* const p3 = &number1;

	// 포인터 변수 값 변경
	// p3 = &number2;

	// 간접 참조를 이용한 값 쓰기 불가능
	// (*p3) += 200;

	return 0;
}