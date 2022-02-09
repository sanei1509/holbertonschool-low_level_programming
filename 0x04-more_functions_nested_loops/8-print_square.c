#include "main.h"

/**
 *print_square - print n times, \n' n times
 *@size : size of square
 *Return: 0
 */
void print_square(int size)
{
	int y, x;

	for (x = 0; x < size; ++x)
	{
		for (y = 0; y < size; ++y)
		{
			putchar('#');
		}
	putchar('\n');
	}
}
