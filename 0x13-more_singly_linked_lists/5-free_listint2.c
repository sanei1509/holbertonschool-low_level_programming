#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t
 *@head: pointer to a first node
 */

void free_listint2(listint_t **head)
{
	listint_t *aux_2;

	aux_2 = *head;
	/*comprobamos que hay head*/
	if(*head == NULL)
		return;
	while (aux_2)
	{
		aux_1 = aux_2->ne;
	}
	*head = NULL;
}
