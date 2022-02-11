#include "main.h"

/**
 *_strlen - swaps the value of two integers
 * @s: The pointer value one
 * return no
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}
