#include <stdio.h>

// const Pointer 변수

// Pointer const 변수

// const Pointer const 변수


int main()
{
	int A = 10;
	int B = 20;


	// const Pointer 변수	
	const int* p1 = &A;
	//*p1 += 10;  역참조를 통한 값쓰기(값 재초기화) 불가능
	// const Pointer는 메모리의 상수화때문에 값변경이 불가능
	//const char* str;
	//A = 20; O
	//p1 = &B;  다시 재 역참조 가능


	// Pointer const 변수
	int* const p2 = &A;
	//*p2 += 20; O
	//p2 = &B;  X  재참조가 불가능!

	
	// const Pointer const 변수
	const int* const p3 = &A;
	//*p3 = 20; X
	//p3 = &B;  X


	return 0;
}