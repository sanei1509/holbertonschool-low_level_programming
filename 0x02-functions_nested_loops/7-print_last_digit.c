#include "main.h"
/**
 *print_last_digit - return deppend of sign of n
 *
 *Return: 0
 *@c: number for evaluate
 */
int print_last_digit(int c)
{
	if (c > 0)
	{
	c = c % 10;
	_putchar('0' + c);
	}
	else
	{
	c = (-1) * c;
	c = c % 10;
	_putchar('0' + c);
	}
	return (0);
}
