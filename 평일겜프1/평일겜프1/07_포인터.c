#include <stdio.h>

// const Pointer ����

// Pointer const ����

// const Pointer const ����


int main()
{
	int A = 10;
	int B = 20;


	// const Pointer ����	
	const int* p1 = &A;
	//*p1 += 10;  �������� ���� ������(�� ���ʱ�ȭ) �Ұ���
	// const Pointer�� �޸��� ���ȭ������ �������� �Ұ���
	//const char* str;
	//A = 20; O
	//p1 = &B;  �ٽ� �� ������ ����


	// Pointer const ����
	int* const p2 = &A;
	//*p2 += 20; O
	//p2 = &B;  X  �������� �Ұ���!

	
	// const Pointer const ����
	const int* const p3 = &A;
	//*p3 = 20; X
	//p3 = &B;  X


	return 0;
}