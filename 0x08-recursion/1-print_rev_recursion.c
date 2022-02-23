#include "main.h"

/**
* _print_rev_recursion - prints a reverse string, followed by a new line
* @s: receive a string
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
