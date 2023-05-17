#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ������ ���ڿ��� �ҹ��ڷ� ��ȯ�Ͽ� ��ȯ�ϴ� �Լ�,
// ������ ���ڿ��� �빮�ڷ� ��ȯ�Ͽ� ��ȯ�ϴ� �Լ�,
// ������ ���ڿ����� �ҹ����� ������ ��ȯ�ϴ� �Լ�,
// ������ ���ڿ����� �빮���� ������ ��ȯ�ϴ� �Լ��� �ۼ��Ͽ�
// ������ ���� �۵��ϴ� ���α׷��� �ϼ��Ͻÿ�
/// - ASCII Code ǥ ����


// input
// �Է� : Hello World!

// output
/// �ҹ��ڷ� ��� : hello world!
/// �빮�ڷ� ��� : HELLO WORLD!
/// �ҹ��� ���� : 8
/// �빮�� ���� : 2

#define UPPERSTART	65
#define UPPEREND	90

#define LOWERSTART	97
#define LOWEREND	122

#define isUpper(c) (UPPERSTART <= (c) && (c) <= UPPEREND)
#define isLower(c) (LOWERSTART <= (c) && (c) <= LOWEREND)

#define toUpper(c) ((c) - (LOWERSTART - UPPERSTART))
#define toLower(c) ((c) + (LOWERSTART - UPPERSTART))

const char* to_lower_case(const char str[], char buf[])
{
	strcpy(buf, str);

	for (int i = 0; i < strlen(buf); ++i)
	{
		if (isUpper(buf[i]))
			buf[i] = toLower(buf[i]);
	}

	return buf;
}

const char* to_upper_case(const char str[], char buf[])
{
	strcpy(buf, str);

	for (int i = 0; i < strlen(buf); ++i)
	{
		if (isLower(buf[i]))
			buf[i] = toUpper(buf[i]);
	}

	return buf;
}

int get_lower_number(const char str[])
{
	int number = 0;

	for (int i = 0; i < strlen(str); ++i)
	{
		if (isLower(str[i]))
			++number;
	}

	return number;
}

int get_upper_nubmer(const char str[])
{
	int number = 0;
	for (int i = 0; i < strlen(str); ++i)
		if (isUpper(str[i])) ++number;

	return number;
}

int main()
{
	printf("�Է� : ");
	char input[256];
	scanf("%[^\n]s", input);

	char buf[256];

	printf("�ҹ��� ��� : %s \n", to_lower_case(input, buf));
	printf("�빮�� ��� : %s \n", to_upper_case(input, buf));
	printf("�ҹ��� ���� : %d \n", to_lower_number(input));
	printf("�빮�� ���� : %d \n", to_upper_number(input));

	return 0;
}