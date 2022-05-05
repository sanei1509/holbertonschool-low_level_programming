#include "lists.h"

/**
 *print_dlistint - print all the element of the doubly linked list
 *@h : is a pointer to first node
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t contador = 0;

	/*aseguramos que la lista tenga nodos*/
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		contador++;
	}
	return (contador);
}
