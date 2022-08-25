#include "search_algos.h"

/**
 * linear_search - Buscar un elemento en un array usando busqueda lineal
 * @array: Array donde buscar
 * @size: length del array
 * @value: valor del elemento buscado
 *
 * Return: si falla -1, en otro caso el [index] valor encontrado
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);
	/*recorro el array hasta encontrar coincidencia*/
	for (i = 0; i < size; i++)
	{
		if (value == array[i])
			return (i)
	}
	return (-1);
}
