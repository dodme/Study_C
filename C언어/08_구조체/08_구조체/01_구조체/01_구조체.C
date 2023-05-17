#pragma warning (disable : 4996)

#include <stdio.h>
#include <string.h>


// 구조체
/// - 다양한 자료형을 하나로 묶을 수 있는 복합 데이터 형식

// 복합 데이터 형식
/// - 기본 데이터 형식을 조합하여 만들어낸 새로운 데이터 형식을 의미합니다.
/// - struct 키워드를 통해 새로운 구조체 형식을 선언할 수 있습니다.


// struct 형식 이름
// {
//		구조체 멤버;
//		구조체 멤버;
// }

// unsigned int 형식에 대한 별칭을 지정합니다.
typedef unsigned int uint, UINT;
/// - typedef : 자료형의 이름을 재정의합니다.
/// - unsigned int 형식 대신 uint 형식을 사용할 수 있습니다.
/// - unsigned int 형식 대신 UINT 형식을 사용할 수 있습니다.

typedef UINT uint32;
/// - unsigned int 형식 대신 uint32 형식을 사용할 수 있습니다.

// 구조체 Cat 을 선언합니다.
typedef struct tag_Cat
{
	// 고양이의 이름을 나타냅니다.
	char name[256];

	// 고양이의 나이를 나타냅니다.
	int age;
} Cat;


int main()
{
	// struct tag_Cat 형식의 변수를 선언합니다.
	Cat myCat;

	// . : 구조체 멤버에 접근하는 멤버접근연산자
	strcpy(myCat.name, "My Cat");
	myCat.age = 3;
	
	printf("myCat name = %s \n", myCat.name);
	printf("myCat age = %d \n", myCat.age);

	struct tag_Cat yourCat;
	strcpy(yourCat.name, "Your Cat");
	yourCat.age = 2;
	printf("yourCat name = %s \n", yourCat.name);
	printf("yourCat age = %d \n", yourCat.age);

	return 0;
}