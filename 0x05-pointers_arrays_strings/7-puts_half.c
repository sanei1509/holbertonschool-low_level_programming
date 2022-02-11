#include "main.h"

/**
 * puts_half - print the string in reverse
 * @s: The pointer value one
 */
void puts_half(char *s)
{
	int ld = 0;
	int i;

	while (s[ld] != '\0')
	{
		ld++;
	}
	if (ld % 2 == 0)
	{
		for (i = ld / 2; i <= ld; i++)
		{
			_putchar(s[i]);
		}

		_putchar('\n');
	}
	else
	{
		for (i = (ld - 1) / 2; i <= ld; i++)
		{
			_putchar(s[i]);
		}

	}
}
