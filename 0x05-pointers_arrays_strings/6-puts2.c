#include "main.h"

/**
 * puts2 - print other numbers
 * @str: receive the value of pointer
 */
void puts2(char *str)
{
	int i = 1;
	int n;

	while (str[i] != '\0')
	{
	i++;
	}
	for (n = 0; n <= i; n = n + 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
