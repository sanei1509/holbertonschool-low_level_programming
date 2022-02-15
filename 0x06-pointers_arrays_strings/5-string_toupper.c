#include "main.h"

/**
* reverse_array - function that reverse the elements of an array
* @a: array of elements
* @n: number of elements in the a
*/

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] -32;
		}
	}
	return(n);
}
