#include "main.h"

/**
 * puts2 - print other numbers
 * @str: receive the value of pointer
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		if (str[i] != '\0')
		{
			i++;
		}
	}
	_putchar('\n');
}
