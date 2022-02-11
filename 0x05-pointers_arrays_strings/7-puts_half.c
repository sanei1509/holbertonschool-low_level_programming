#include "main.h"

/**
 * puts_half - print the string in reverse
 * @s: The pointer value one
 */
void puts_half(char *str)
{
	int ld = 0;
	int i = 0;

	while (str[ld] != '\0')
	{
		ld++;
	}
	if (ld % 2 == 0)
	{
		for (i = ld / 2; i < ld; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (ld + 1) / 2; i < ld; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
