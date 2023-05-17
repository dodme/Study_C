#include <stdio.h>

// ¿¬»êÀÚ
/// + - * / %

int main()
{
	int x = 10;
	int y = 20;

	int result = 0;

	result = x + y;
	printf("µ¡¼À : %d\n", result);

	result = x - y;
	printf("–E¼À : %d\n", result);

	result = x * y;
	printf("°ö¼À : %d\n", result);

	// ¸í½ÃÀû Çüº¯È¯ / Casting
	result = (float)x / y;
	printf("³ª´°¼À : %f\n", (float)x / y);

	// ¹¬½ÃÀû Çüº¯È¯
	float f = 0;
	// °ªÀÇ È®´ë
	int n = 10.0f;
	// °ªÀÇ Ãà¼Ò

	result = x % y;
	printf("³ª¸ÓÁö %% : %d\n", result);


	return 0;
}