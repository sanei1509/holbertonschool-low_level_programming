#include "main.h"

/**
 *print_diagonal - print n number of spaces follow that /
 *Return: 0
 *@n: number ingressed
 */

void print_diagonal(int n)
{
	int i, l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (l = 0; l < n; l++)
	{
		for (i = 0; i < l; i++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	}

}
