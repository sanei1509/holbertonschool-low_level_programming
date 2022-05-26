#include "hash_tables.h"

/**
 *hash_table_create - funcion para crear una hash table.
 *@size: size of the array
 *Return: pointer a una nueva hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_hash = NULL;

	if (size == 0)
		return (NULL);

	/*primero hacemos espacio para el array*/
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);

	new_hash->array = calloc(size, sizeof(hash_node_t *));
	if (new_hash->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_hash->array[i] = NULL;

	new_hash->size = size;
	return (new_hash);
}
