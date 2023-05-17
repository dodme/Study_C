#include <stdio.h>

//void print_array(int * array, int array_length)
//void print_array(int array[], int array_length)
void print_array(const int array[], int array_length)
{
	for (int i = 0; i < array_length; ++i)
		printf("%d ", array[i]);
	printf("\n");
}

int main()
{

	int my_array[5] = { 1, 2, 3, 4, 5 };

	print_array(my_array, sizeof(my_array) / sizeof(my_array[0]));





	return 0;
}