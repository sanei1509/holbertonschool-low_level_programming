#include "function_pointers.h"

/**
*int_index - function that searches
*@array: receive an array
*@size: number of elements
*@cmp: function that need compare
*Return: depend is an integer or not
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int size_int = size;

	if (cmp != NULL && array != NULL)
	{
		/* case that size <= 0 */
		if (size_int <= 0)
		return (-1);

		/*recorrer array buscando un integers*/
		for (i = 0; i < size_int; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
