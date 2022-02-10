#include "main.h"

/**
 *print_triangle - show a triangle with #
 *@size : size of triangle
 *Return: 0
 */
void print_triangle(int size)
{
		int l;
		int a;

		if (size <= 0)
		{
			_putchar('\n');
		}
		for (l = 1; l <= size; l++)
		{
			for (a = 1; a <= (size - l); a++)
			{
				_putchar(' ');
			}
			for (a = 1; a <= l; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
