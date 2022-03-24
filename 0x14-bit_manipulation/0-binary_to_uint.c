#include "main.h"

/**
 *binary_to_uint - convert a binary num to an unsigned int
 *@b: pointer to a string of 0 and 1 chars
 *Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num_bin = 0, po = 1, ls;
	int i;

	/*border case*/
	if (b == NULL)
		return (0);
	ls = strlen(b);
	for (i = (ls - 1); i >= 0; i--)
	{
		/*si no es 0 || 1*/
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] == '1')
		{
			num_bin += po;
		}
		po *= 2;
	}
	return (num_bin);
}
