#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)


typedef struct
{
	char name[256];
	int age;
}Student;

void PrintStudentInfo(Student student)
{
	printf("�̸��� : %s�Դϴ�.\n", student.name);
	printf("���̴� : %d�Դϴ�.\n", student.age);
}

void SetStudentInfo(Student* student, char str[], int age)
{
	// -> : ��� �������� ������
	///   �� ? �ڵ忡 ���� ���ȼ�������
	strcpy(student->name, str);
	//strcpy(*(student).name, str);
	student->age = age;
}

int main()
{
	Student student[3];
	SetStudentInfo(&student[0], "�����", 10);
	SetStudentInfo(&student[1], "�����", 10);
	SetStudentInfo(&student[2], "�����", 10);

	PrintStudentInfo(student[0]);
	PrintStudentInfo(student[1]);
	PrintStudentInfo(student[2]);


	return 0;
}