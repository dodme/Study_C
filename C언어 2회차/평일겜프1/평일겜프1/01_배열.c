#include <stdio.h>

// 배열
/// > 동일한 자료형의 변수들의 집합
// -> 연속된 메모리 들의 시작주소를 가리키는 포인터
/// 자료형 배열변수이름[배열의 크기]
/// 배열 안에 있는 변수들을 각각 "배열의 요소"라고 한다
/// 배열의 요소 == Element


int main()
{
	int arrNum[3] = {10, 5, 17};

	//printf("[0] : %d\n", arrNum[0]);
	//printf("[1] : %d\n", arrNum[1]);
	//printf("[2] : %d\n", arrNum[2]);
	
	printf("[3] : %d\n", arrNum[3]);


	return 0;
}