#include "main.h"

/**
*flip_bits - get number of bit that you need change to get a num
*@n: num binary one
*@m: numb binary two
*Return: number of bit need to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, i;

	if(n == m)
	return (0);

	for (i = n ^ m; i != 0 && i > 0; i = i >> 1)
		count += i & 1;

	return (count);
}
