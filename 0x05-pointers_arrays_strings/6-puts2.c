#include "main.h"

/**
 * puts2 - print other numbers
 * @str: receive the value of pointer
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (str[i] % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
