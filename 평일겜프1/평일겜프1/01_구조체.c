#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)

// �ڷᱸ�� Data Structure

// ����ü
/// > �پ��� �ڷ��� �������� ����
/// > struct

typedef unsigned int uint;

typedef struct
{
	// �ν��Ͻ� �ʵ�
	// ��� member
	char name[256]; // ��� ����
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
	// ��ü == ���� �������� ����ִ� ����

	// . : ��� ���� ���� ������
	strcpy(s1.name, "�����");
	s1.age = 10;
	s1.score = 100;

	strcpy(s2.name, "���ʵ�");
	s2.age = 11;
	s2.score = 120;

	PrintStudentInfo(s1.name, s1.age, s1.score);
	
	printf("%s\n", s2.name);
	printf("%d\n", s2.age);
	printf("%d\n", s2.score);


	return 0;
}

// ����!
// Student�� ������ ����ϴ� �Լ��� �ۼ��ϼ���!
