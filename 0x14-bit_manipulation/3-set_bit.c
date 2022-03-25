#include "main.h"

/**
*set_bit - change bit of a given position
*@n: pointer to a number binary
*@index: position of a bit to change
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask_op;

	if (index > 64)
		return (-1);

	mask_op = 1 << index;

	*n = (*n | mask_op);

		return (1);

}
