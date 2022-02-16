#include "main.h"

/**
* *string_toupper - function that convert in uppercase the string
* @n: array of elements
* Return: char in uppercase
*/

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
