#include "main.h"

/**
 *get_endianness - es un bit con mucho o poco valor
 *Return: 0 big endian || 1 little endiar
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
