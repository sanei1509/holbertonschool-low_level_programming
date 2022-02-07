#include "main.h"
/**
 *print_last_digit - return deppend of sign of n
 *
 *Return: 0
 *@c: number for evaluate
 */
int print_last_digit(int c)
{
	int rt;
	rt = c % 10;
	if (rt < 0)
	{
	rt *= -1;
	}
	_putchar('0' + rt);
	return (rt);
}
