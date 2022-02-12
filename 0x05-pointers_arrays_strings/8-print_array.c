#include "main.h"

/**
 * print_array - print the string in reverse
 * @a: array para recorrer
 * @n: numero element in the array
 */
void print_array(int *a, int n)
{
	int i;

	for(i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if(a[i] != n)
		{
		printf(", ");
		}
	}
	printf("\n");
}
