#include "main.h"

/**
 * print_rev - print the string in reverse
 * @s: The pointer value one
 */
void print_rev(char *s)
{
	int ld = 0;
	int i;

	while (s[ld] != '\0')
	{
		ld++;
	}
	for (i = ld - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
