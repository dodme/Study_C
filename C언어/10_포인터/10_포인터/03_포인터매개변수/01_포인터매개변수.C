#include <stdio.h>


void add_number(int * variable, int number)
{
	*variable += number;
}

int main()
{
	int myVariable = 10;
	add_number(&myVariable, 10);

	printf("myVaraible = %d \n", myVariable);



	return 0;
}