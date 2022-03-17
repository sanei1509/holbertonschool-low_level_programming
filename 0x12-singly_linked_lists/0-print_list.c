#include "lists.h"

/**
*print_list - print elements of a list
*@h: pointer to a list
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		h = h->next;
		count++;
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
		}
	}

	return (count);
	/*return num of nodes*/
}
