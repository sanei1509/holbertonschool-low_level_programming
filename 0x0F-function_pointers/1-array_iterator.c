#include "function_pointers.h"

/**
 *array_iterator - execute a function dada como parametro
 *@array: receive arrays
 *@size: receive a size of arrays
 *@action: pointer to a function for execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int size_int = size;

	if (size_int >= 0 && array != NULL)
	{
	for (i = 0; i < size_int; i++)
	{
		action(array[i]);
	}
	}
}
