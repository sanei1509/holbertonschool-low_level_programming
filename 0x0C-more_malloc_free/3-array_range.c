#include "main.h"

/**
**array_range - array should with values from min to max
*@min: min value of the array
*@max: max value of the array
*Return: a pointer to a newly created array
*/

int *array_range(int min, int max)
{
	int *arr;
	int len = 0, i;

	/*antes de reservar memoria check input*/
	if (min > max)
		return (NULL);
	/* calculamos el length del array*/
	len = max - min;
	arr = malloc((len + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	/* incrementa min hasta max y se va metiendo a array*/
	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
