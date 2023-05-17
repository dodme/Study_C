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
	printf("이름은 : %s입니다.\n", student.name);
	printf("나이는 : %d입니다.\n", student.age);
}

void SetStudentInfo(Student* student, char str[], int age)
{
	// -> : 멤버 간접접근 연산자
	///   왜 ? 코드에 대한 보안성떄문에
	strcpy(student->name, str);
	//strcpy(*(student).name, str);
	student->age = age;
}

int main()
{
	Student student[3];
	SetStudentInfo(&student[0], "김민자", 10);
	SetStudentInfo(&student[1], "김민자", 10);
	SetStudentInfo(&student[2], "김민자", 10);

	PrintStudentInfo(student[0]);
	PrintStudentInfo(student[1]);
	PrintStudentInfo(student[2]);


	return 0;
}