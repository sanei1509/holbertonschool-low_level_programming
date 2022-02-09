#include "main.h"

/**
 *print_square - print n times, \n' n times
 *@size : size of square
 *Return: 0
 */
void print_square(int size)
{
	int y, x;

	if(size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; ++x)
	{
		for (y = 0; y < size; ++y)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	}
}
