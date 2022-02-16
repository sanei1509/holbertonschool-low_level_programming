#include "main.h"

/**
* print_number - print the numbers integers
* @n: number received
*/

void print_number(int n)
{
	unsigned int dg;
	unsigned int nat = n;
	unsigned int dc;

	double t = 1;
   
	if(n == 0)
		_putchar('0');
	else
	{
		if (n < '0')
			_putchar(n + '0');
	}
	
		_putchar(n % 10 + '0');

	
	
}
