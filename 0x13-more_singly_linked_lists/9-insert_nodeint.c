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
	listint_t *aux = *head;
	unsigned int size = 0;

	if (idx < 1 || idx > size + 1)
		return (NULL);
	while (idx--)
	{
		if (idx == 0)
		{
			aux->next = *head;
			*head = aux;
			aux->n = n;
		}
		else
		head = &(*head)->next;
	}
	size++;
	return (aux);
}
