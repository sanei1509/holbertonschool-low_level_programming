#include "main.h"

/**
 *get_bit - get the value of a bit in n position
 *@index: is the position of bit
 *@n: is the number in binary
 *Return: value of a bit 0 || 1 or -1 in fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num_bin = (n >> index) & 1, s = n;
	unsigned int cont = 0;

	while (s > 1)
	{
		s /= 2, cont++;
	}
	if (index <= cont + 1)
	{
		if (n > 0)
			return (num_bin);
	}

	return (-1);
}

