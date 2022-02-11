#include "main.h"

/**
 * rev_string - print the string in reverse
 * @s: The pointer value one
 */
void rev_string(char *s)
{
	int ld = 0;
	int i;

	while (s[ld] != '\0')
	{
		ld++;
	}
	if (ld % 2 == 0)
	{
		for (i = (ld/2); i <= ld; i++)
		{
			_putchar(s[i]);
		}
	
		_putchar('\n');
	}
	else
	{
		for (i = ((ld - 1) / 2); i <= ld; i++)
		{
			_putchar(s[i]);
		}

	}
}
