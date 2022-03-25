#include "main.h"

/**
 *print_binary - binary representation of a number
 *@n: a big positive number
 *Return: the number converted to binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)

	print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
