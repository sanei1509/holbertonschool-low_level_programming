#include "main.h"

/**
 * print_array - print the string in reverse
 * @a: array para recorrer
 * @n: numero element in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
		printf("%d", a[i]);
		printf(", ");
		}
		else
		{
		printf("%d", a[i]);
		}
	}
	printf("\n");
}
