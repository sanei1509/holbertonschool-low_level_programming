#include "lists.h"

/**
 *free_list - function that frees a list_t
 *@head: first node of list_t
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
