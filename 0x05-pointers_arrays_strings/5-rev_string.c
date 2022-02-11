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
	for (i = ld; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	
}
