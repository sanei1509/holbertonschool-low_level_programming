#include "lists.h"

/**
 *listint_len - return the number of element
 *@h: pointer to A first node of the list
 *Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n)
		{
			/*pasamos al próximo*/
			h = h->next;
			count++;
		}
	}
	return (count);
}
