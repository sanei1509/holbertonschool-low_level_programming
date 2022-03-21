#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t
 *@head: pointer to a first node
 */

void free_listint2(listint_t **head)
{
	listint_t *aux_1, *aux_2;

	aux_2 = *head;

	while (aux_2)
	{
		aux_1 = aux_2->next;
		free(aux_2);
		aux_2 = aux_1;
	}
	*head = NULL;
}
