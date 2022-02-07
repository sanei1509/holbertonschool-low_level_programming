#include "main.h"
/**
 *print_sign - return deppend of sign of n
 *
 *Return: 0
 *@n: number for evaluate
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
