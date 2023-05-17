#include <stdio.h>

// 포인터 변수
/// - 할당되어있는 메모리의 시작 주소를 가질 수 있는 변수를 의미합니다.
/// - 가지는 시작 주소를 갖는 메모리에 간접적으로 접근할 수 있습니다.

int main()
{
	// int 형식을 가리킬 수 있는 포인터 변수를 선언합니다.
	int * p;

	int variable = 10;

	// 포인터 변수 p 는 int 형식의 변수 variable 의 시작 주소를 갖습니다.
	p = &variable;
	/// - 어떠한 변수의 시작 주소값을 구할 때 "주소 연산자(&)" 를 사용합니다.
	/// - &variable : variable 이 사용하는 메모리의 시작 주소를 나타냅니다.
	/// - 가리킨다 : 포인터 변수에 어떠한 시작 주소를 할당하는 행위

	// variable 의 메모리의 시작 주소를 출력합니다.
	printf("variable address : %p \n", &variable);
	printf("p address : %p \n", p);

	// 포인터 변수와 주소
	/// - 주소 : 변수에 할당된 메모리 저장 공간의 시작 주소값 자체를 의미합니다.
	/// - 포인터 변수 : 주소값을 저장할 수 있는 또 다른 메모리 공간을 의미합니다.
	/// - variable
	///		값 : 10
	///		주소값 : &variable
	/// - p
	///		값 : %variable
	///		주소값 : &p

	printf("variable = %d \n", variable);
	printf("*p = %d \n", *p);
	/// - 간접 참조 연산자 : 포인터 변수에 할당된 시작 주소를 갖는 데이터에 접근하는 연산자
	/// - 간접 참조 : 포인터 변수가 가리키는 변수의 메모리에 접근하는 행위

	// 포인터 변수 p 가 가리키는 메모리에 50 을 입력합니다.
	(*p) = 50;
	printf("variable = %d \n", variable);





	return 0;
}