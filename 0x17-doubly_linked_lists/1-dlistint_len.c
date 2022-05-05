#include "lists.h"

/**
 *dlistint_len - return the number of elements in a linked list
 *@h : is a pointer to first node
 *Return: the len of the linked lists
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t contador = 0;

	/*aseguramos que la lista tenga nodos*/
	while (h != NULL)
	{
		h = h->next;
		contador++;
	}
	return (contador);
}
