#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

// 자료구조 Data Structure

// 구조체
/// > 다양한 자료형 변수들의 집합
/// > struct

typedef unsigned int uint;

typedef struct
{
	// 인스턴스 필드
	// 멤버 member
	char name[256]; // 멤버 변수
	uint age;
	uint score;



}Student;

void PrintStudentInfo(char name[], uint age, uint score)
{
	printf("%s\n", name);
	printf("%d\n", age);
	printf("%d\n", score);
}

int main()
{
	Student s1;
	Student s2;
	// 객체 == 여러 정보들을 담고있는 변수

	// . : 멤버 직접 접근 연산자
	strcpy(s1.name, "김민자");
	s1.age = 10;
	s1.score = 100;

	strcpy(s2.name, "김필두");
	s2.age = 11;
	s2.score = 120;

	PrintStudentInfo(s1.name, s1.age, s1.score);
	
	printf("%s\n", s2.name);
	printf("%d\n", s2.age);
	printf("%d\n", s2.score);


	return 0;
}

// 문제!
// Student의 정보를 출력하는 함수를 작성하세요!
