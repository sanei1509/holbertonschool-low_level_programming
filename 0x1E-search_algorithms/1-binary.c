#include "search_algos.h"

/**
 * binary_search - Buscar un elemento en un array usando busqueda binaria
 * @array: Array donde buscar
 * @size: length del array
 * @value: valor del elemento buscado
 *
 * Return: si falla -1, en otro caso el [index] valor encontrado
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	int i = 0;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		printf("Searching in array: ");
		/*intentando imprimir el array de busqueda en cada recorte*/
		for (i = low; i <= high; i++)
		{
			if (i != high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}
	return (-1);
}
