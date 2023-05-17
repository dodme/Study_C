#include <stdio.h>

int main()
{
	// 자동 변수
	/// - 선언한 지역에 들어왔을 때 할당되며, 지역을 벗어나면
	///   자동으로 소멸되는 변수를 말합니다.
	/// - auto 키워드를 사용하여 선언할 수도 있지만, 보통은
	///   생략하여 사용합니다.
	
	auto int A = 100;
	char B = 'A';
	double C = 3.14;

	printf("A = %d \n", A);
	printf("B = %c \n", B);
	printf("C = %.2f \n", C);

	return 0;
}