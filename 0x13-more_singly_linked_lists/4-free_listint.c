#include "lists.h"

/**
 *free_listint - function that frees a listint_t
 *@head: pointer to a first node
 */

void free_listint(listint_t *head)
{
	void *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
