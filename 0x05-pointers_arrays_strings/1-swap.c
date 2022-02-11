#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: The pointer value one
 * @b: the pointer value two
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	int aux1 = *b;

	*a = aux1;
	*b = aux;
}
