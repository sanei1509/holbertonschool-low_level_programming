#include "lists.h"

/**
**insert_dnodeint_at_index - put the node in a given position
*@h: pointer to a pointer to a first node
*@idx: given position
*@n: data of node
*Return: a struct
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int size = 0;
	dlistint_t *new_node, *aux = *h;
	/*guardamos memoria*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	/*solo tenemos un nodo*/
	if (h == NULL)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	/*indice pedido == 0*/
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	while (size < (idx - 1))
	{
		aux = aux->next;
		size++;
		if (aux == NULL)
			return (NULL);
	}
	new_node->next = aux->next;
	aux->next = new_node;
	return (new_node);
}
