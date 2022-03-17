#include "lists.h"

/**
 *list_len - list the num of elements of nodes
 *@h: pointer to first node of list_h(head)
 *Return: num of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
