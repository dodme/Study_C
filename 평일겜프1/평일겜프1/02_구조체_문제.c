#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996)


typedef struct
{
	char name[256];
	int kor;
	int eng;
	int math;
}Student;

void SetStudentInfo(Student student, const char str[], int kor, int eng, int math)
{
	strcpy(student.name, str);
	student.kor = kor;
	student.eng = eng;
	student.math = math;
}

void PrintStudentInfo(Student student)
{
	printf("�̸� : %s\n", student.name);
	printf("�������� : %u\n", student.kor);
	printf("�������� : %u\n", student.eng);
	printf("�������� : %u\n", student.math);
}

int main()
{
	Student student[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		printf("�л��� �̸��� �Է��ϼ���.\n");
		scanf("%s", &student[i].name);
		printf("�л��� ���������� �Է��ϼ���.\n");
		scanf("%d", &student[i].kor);
		printf("�л��� ���������� �Է��ϼ���.\n");
		scanf("%d", &student[i].eng);
		printf("�л��� ���������� �Է��ϼ���.\n");
		scanf("%d", &student[i].math);
	}

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		PrintStudentInfo(student[i]);
		printf("\n");
	}

	return 0;
}