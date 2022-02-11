#include "main.h"

/**
 *_strlen - swaps the value of two integers
 * @s: The pointer value one
 * return no
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s[len] != '\0')
		len++;

	return (len);
}
