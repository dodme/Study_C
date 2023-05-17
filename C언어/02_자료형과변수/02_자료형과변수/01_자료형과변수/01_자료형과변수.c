

// 변수
/// - 값을 대입시켜 변화시킬 수 있는 요소

// 데이터 형식
/// - C 언어에서 사용할 수 있는 데이터 형식은 크게
///		"정수 형식", "실수 형식" 으로 나눌 수 있습니다.

// 정수 데이터 형식			크기(byte)	표현 가능한 값의 범위
/// - char- ASCII코드문자	1 byte		- 128 ~ 127
/// - short					2 byte		- 32768 ~ 32767
/// - int					4 byte		약 - 21억 ~ 약 21억
/// - long					4 byte		약 - 21억 ~ 약 21억
/// - long long				8 byte		약 - 922경 ~ 약 922경

// 부호 없는 정수 형식
/// - unsigned char			1 byte		0 ~ 255
/// - wchar_t - UNICODE문자	2 byte		0 ~ 65535
/// - unsigned long			2 byte		0 ~ 65535
/// - unsigned int			4 byte		0 ~ 약 42억
/// - unsigned long			4 byte		0 ~ 약 42억
/// - unsigned long long	8byte		0 ~ 약 1844경\

// 변수 선언 방법
/// - 자료형 식별자;
///   자료형 식별자1, 식별자2;
 
// 변수의 초기화
/// - 선언한 변수에 최초로 값을 할당하는 행위
/// - 식별자 = 값;

// 변수 선언과 동시에 초기화
/// - 자료형 식별자 = 값;


#include <stdio.h>
#include <Windows.h>
#include <locale.h>

int main()
{
	// 변수 선언
	int myNumber1;

	// myNumber1 변수의 값을 정의합니다.
	myNumber1 = 100;

	printf("myNumber1 = %d \n", myNumber1);
	printf("myNumber1 size = %u \n", sizeof(myNumber1));
	/// - sizeof 연산자를 이용하여 특정한 변수나 타입이 몇 byte의
	/// - 메모리 크기를 갖는지 정수 형태로 확인할 수 있다.

	unsigned long long myNumber2 = 100000000000000;
	printf("myNumber2 = %llu \n", myNumber2);
	printf("myNumber2 size = %u \n", sizeof(myNumber2));

	char myCharacter1 = 'A';

	printf("myCharacter1 = %c \n", myCharacter1);
	printf("myCharacter1 size = %u \n", sizeof(myCharacter1));

	setlocale(LC_ALL, "");

	//wchar_t myCharacter2 = L'가';
	wchar_t myCharacter2 = TEXT('가');
	/// - 문자, 문자열 앞의 L 은 와이드 문자 리터럴을 나타냅니다.
	
	/*const wchar_t * myString = TEXT("MyString!");
	printf("myString = %S \n", myString);*/

	printf("myCharacter2 = %C \n", myCharacter2);


	return 0;
}


