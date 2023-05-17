#include <stdio.h>
#include <math.h>
/// - math.h : 수학적인 함수를 제공하는 헤더입니다.

// 조건 연산자
/// - 조건식을 검사하여 참일 때와 거짓을 때의 값을 다르게 반환시키는 연산자
/// - 형식 : (조건식) ? 참일 경우 값 : 거짓을 경우 값;

int main()
{
	int number = 10;

	// number 의 값이 10 인가?
	/// - 참이라면 "number 는 10 입니다."
	/// - 거짓이라면 "number 는 10 이 아닙니다." 출력
	printf("number 는 10 %s \n", ((number == 10) ? "입니다." : "아닙니다."));
	printf("\n");

	double x1 = 10.0f;
	double y1 = 10.0f;

	double x2 = 100.0f;
	double y2 = 100.0f;

	// (x1, y1) 과 (x2, y2) 사이의 거리를 지정합니다.
	// sqrt() : 루트를 구하는 함수
	// pow(x,y) : x의 y승을 구하는 함수
	double distance = sqrt(
		pow((x2 - x1), 2) + pow((y2 - y1), 2) );

	printf("(%.2f, %.2f) 와 (%.2f, %.2f) 사이의 거리는 %.4f 입니다. \n", x1, y1, x2, y2, distance);

	printf(" 두 점 사이의 거리가 100 %s 입니다. \n", ((distance > 100) ? "초과" : "이하"));

	return 0;
}