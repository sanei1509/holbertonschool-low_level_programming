#include "lists.h"

/**
 *print_listint - print all the elements of a listint_t
 *@h: pointer tO A first node of the list
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
			/*pasamos al próximo*/
			h = h->next;
			count++;
		}
	}
	return (count);
}
