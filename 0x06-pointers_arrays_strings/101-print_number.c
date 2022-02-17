#include "main.h"
#include <stdio.h>

/**
* print_number - print the numbers integers
* @n: number received
*/

void print_number(int n)
{
	unsigned int dc, dig, nat = n;
	double f = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			nat = n * -1;
			_putchar('-');
		}

	while (f <= nat)
		f *= 10;
	dc = f / 10;

	while (dc >= 1)
	{
		dig = nat / dc;
		_putchar(dig + '0');
		nat = (nat - (dc * dig));
		dc /= 10;
	}
	}
}
