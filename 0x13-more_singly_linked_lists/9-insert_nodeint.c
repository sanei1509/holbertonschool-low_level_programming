#include "lists.h"

/**
**insert_nodeint_at_index - put the node in a given position
*@head: pointer to a pointer to a first node
*@idx: given position
*@n: data of node
*Return: a struct
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size = 0;
	listint_t *new_node, *aux = *head;
	/*guardamos memoria*/
	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	/*solo tenemos un nodo*/
	if (head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/*indice pedido == 0*/
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
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
