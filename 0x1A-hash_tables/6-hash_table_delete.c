#include "hash_tables.h"

/**
 *hash_table_delete - función que borre una hash table
 *@ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *element = NULL, *aux = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		element = ht->array[i];
		while (element != NULL)
		{
			aux = element->next;
			if (element->key != NULL)
				free(element->key);
			if (element->value != NULL)
				free(element->value);

			free(element);
			element = aux;
		}
		i++;
	}
	free(ht->array);
	free(ht);
	free(element);
	free(aux);
}
