#include "main.h"

/**
 *print_binary - binary representation of a number
 *@n: a big positive number
 *Return: the number converted to binary
 */

void print_binary(unsigned long int n)
{

	if (n == 0)
		_putchar(48);

	while (n)
	{
		if (n & 1)
			putchar('0');
		else
			putchar('1');

		/*right shif 'n' by 1 */
		n >>= 1;
	}

}
