#pragma warning ( disable : 4996 )
#include <stdio.h>

// �Ű� ����
/// - �Լ����� ����� �����͸� ���޹޴� ���� �ϴ� ����

// �Լ��� �����մϴ�.
int print_age(int birth_year);
int plus_numbers(int number1, int number2);

int main()
{
	printf("����� �¾ �⵵�� �Է��Ͻÿ� : ");
	int your_birth_year;
	scanf("%d", &your_birth_year);

	int your_age = print_age(your_birth_year);

	printf("����� ������ �¾ �⵵�� �Է��Ͻÿ� : ");
	int friend_birth_year;
	scanf("%d", &friend_birth_year);

	int friend_age = print_age(friend_birth_year);

	printf("��Ű� ��� ������ ���� �� = %d �� �Դϴ�. \n", plus_numbers(your_age, friend_age));
	
	return 0;
}

// �ڽ��� ���̸� ����ϴ� �Լ��� �����մϴ�.
/// - birth_year : ������ �����մϴ�.
int print_age(int birth_year)
{
	// ���� �⵵�� ��Ÿ�� ����� �����մϴ�.
	const int current_year = 2021;

	// ���� ���� �⵵���� ū ���� ���޵Ǿ��ٸ�
	if (current_year <= birth_year)
	{
		printf("�⵵�� �߸� �Ǿ����ϴ�. \n");
		printf("���� �⵵ : %d �� \n", current_year);
		printf("���޵� �⵵ : %d �� \n", birth_year);

		// �Լ� ȣ���� �����մϴ�.
		return 0;
	}

	int your_age = current_year - birth_year + 1;
	printf("���̴� %d �� �Դϴ�.\n", your_age);

	return your_age;
}


// ���޹��� �ƱԸ�Ʈ �� ���� ���� ��ȯ�ϴ� �Լ��Դϴ�.
int plus_numbers(int number1, int number2) 
{
	return number1 + number2;
}