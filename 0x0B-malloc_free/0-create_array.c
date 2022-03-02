#include "main.h"

/**
**create_array - function that create a new array with a especific character
*@size: receive a size of array
*@c: receive a especific char
*Return: pointer to a char or null
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(c * size);

	if (size == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
		return (ar);
	}
}
