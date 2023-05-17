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
	printf("이름 : %s\n", student.name);
	printf("국어점수 : %u\n", student.kor);
	printf("영어점수 : %u\n", student.eng);
	printf("수학점수 : %u\n", student.math);
}

int main()
{
	Student student[3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		printf("학생의 이름을 입력하세요.\n");
		scanf("%s", &student[i].name);
		printf("학생의 국어점수를 입력하세요.\n");
		scanf("%d", &student[i].kor);
		printf("학생의 영어점수를 입력하세요.\n");
		scanf("%d", &student[i].eng);
		printf("학생의 수학점수를 입력하세요.\n");
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