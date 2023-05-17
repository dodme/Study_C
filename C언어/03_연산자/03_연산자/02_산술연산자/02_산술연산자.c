#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	printf("num1 À» ÀÔ·ÂÇÏ¼¼¿ä : ");
	int num1;
	scanf("%d", &num1);

	printf("num2 À» ÀÔ·ÂÇÏ¼¼¿ä : ");
	int num2;
	scanf("%d", &num2);

	printf("µ¡¼À : %d \n", (num1 + num2));
	printf("»¬¼À : %d \n", (num1 - num2));
	printf("°ö¼À : %d \n", (num1 * num2));
	printf("³ª´°¼À : %f \n", ((float)num1 / num2));


	/*int num1 = 7;
	int num2 = 7;

	double addition = num1 + num2;
	double subtraction = num1 - num2;
	double multiplication = num1 * num2;
	double division = (double)num1 / num2;

	printf("addition = %.0f \n", addition);
	printf("subtraction = %.2f \n", subtraction);
	printf("multiplication = %.2f \n", multiplication);
	printf("divison = %.2f \n", division);*/


	return 0;
}