#include <stdio.h>

// 부동 소수점 형식
/// - float			4byte		유효 자리 [7자리]
/// - double		8byte		유효 자리 [15자리]


int main()
{
	float myFloat = 3.14f;
	/// - 값 뒤에 f 를 작성하여 float 형식 리터럴을 나타냅니다.
	printf("myFloat = %.2f \n", myFloat);
	printf("myFloat size = %u \n", sizeof(myFloat));

	double myDouble = 123.4567;
	printf("myDouble = %.4f \n", myDouble);
	printf("myDouble size = %u \n", sizeof(myDouble));


	return 0;
}



//	> 다음과 같은 변수를 선언하고 초기화 하여 출력해보세요!
/// - int  자료형 변수 A 를 만들고 100을 설정하여 출력해보세요!
/// - char 자료형 변수 B 를 만들고 'A'를 설정하여 출력해보세요!
/// - double 자료형 변수 C 를 만들고 3.14 를 설정하여 출력해보세요!