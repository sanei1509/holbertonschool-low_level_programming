#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
void print_diagsums(int *a, int size)
{
	int diagonal_one = 0;
	int diagonal_two = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal_one += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonal_two += a[i];
	}

	printf("%d, %d\n", diagonal_one, diagonal_two);
}
