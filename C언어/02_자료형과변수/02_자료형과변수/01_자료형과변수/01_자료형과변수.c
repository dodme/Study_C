

// ����
/// - ���� ���Խ��� ��ȭ��ų �� �ִ� ���

// ������ ����
/// - C ���� ����� �� �ִ� ������ ������ ũ��
///		"���� ����", "�Ǽ� ����" ���� ���� �� �ֽ��ϴ�.

// ���� ������ ����			ũ��(byte)	ǥ�� ������ ���� ����
/// - char- ASCII�ڵ幮��	1 byte		- 128 ~ 127
/// - short					2 byte		- 32768 ~ 32767
/// - int					4 byte		�� - 21�� ~ �� 21��
/// - long					4 byte		�� - 21�� ~ �� 21��
/// - long long				8 byte		�� - 922�� ~ �� 922��

// ��ȣ ���� ���� ����
/// - unsigned char			1 byte		0 ~ 255
/// - wchar_t - UNICODE����	2 byte		0 ~ 65535
/// - unsigned long			2 byte		0 ~ 65535
/// - unsigned int			4 byte		0 ~ �� 42��
/// - unsigned long			4 byte		0 ~ �� 42��
/// - unsigned long long	8byte		0 ~ �� 1844��\

// ���� ���� ���
/// - �ڷ��� �ĺ���;
///   �ڷ��� �ĺ���1, �ĺ���2;
 
// ������ �ʱ�ȭ
/// - ������ ������ ���ʷ� ���� �Ҵ��ϴ� ����
/// - �ĺ��� = ��;

// ���� ����� ���ÿ� �ʱ�ȭ
/// - �ڷ��� �ĺ��� = ��;


#include <stdio.h>
#include <Windows.h>
#include <locale.h>

int main()
{
	// ���� ����
	int myNumber1;

	// myNumber1 ������ ���� �����մϴ�.
	myNumber1 = 100;

	printf("myNumber1 = %d \n", myNumber1);
	printf("myNumber1 size = %u \n", sizeof(myNumber1));
	/// - sizeof �����ڸ� �̿��Ͽ� Ư���� ������ Ÿ���� �� byte��
	/// - �޸� ũ�⸦ ������ ���� ���·� Ȯ���� �� �ִ�.

	unsigned long long myNumber2 = 100000000000000;
	printf("myNumber2 = %llu \n", myNumber2);
	printf("myNumber2 size = %u \n", sizeof(myNumber2));

	char myCharacter1 = 'A';

	printf("myCharacter1 = %c \n", myCharacter1);
	printf("myCharacter1 size = %u \n", sizeof(myCharacter1));

	setlocale(LC_ALL, "");

	//wchar_t myCharacter2 = L'��';
	wchar_t myCharacter2 = TEXT('��');
	/// - ����, ���ڿ� ���� L �� ���̵� ���� ���ͷ��� ��Ÿ���ϴ�.
	
	/*const wchar_t * myString = TEXT("MyString!");
	printf("myString = %S \n", myString);*/

	printf("myCharacter2 = %C \n", myCharacter2);


	return 0;
}


