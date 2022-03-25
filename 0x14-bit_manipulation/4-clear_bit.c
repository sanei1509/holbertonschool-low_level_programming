#include "main.h"

/**
*clear_bit - change all bits to zero
*@n: pointer to a number binary
*@index: position of a bit to change
*Return: 1 if work -1 is not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

		return (1);

}
