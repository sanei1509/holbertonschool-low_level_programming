#include "lists.h"

/**
 *free_dlistint - free de una lista pasada a la función
 *@head:puntero al primer nodo
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		/*libero la data*/
		/*luego el puntero t continuo*/
		free(head);
		head = head->next;
	}
}
