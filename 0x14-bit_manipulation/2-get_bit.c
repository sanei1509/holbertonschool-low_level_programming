#include "main.h"

/**
 *get_bit - get the value of a bit in n position
 *@index: is the position of bit
 *@n: is the number in binary
 *Return: value of a bit 0 || 1 or -1 in fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num_bin = (n >> index) & 1;
	unsigned int s = 1, potencia = 0;

	while (s < n)
	{
		s *= 2;
		potencia++;
	}
	if (index <= potencia - 1)
	{
			return (num_bin);
	}

	return (-1);
}
