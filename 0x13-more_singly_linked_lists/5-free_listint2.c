#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t
 *@head: pointer to a first node
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	/*comprobamos que hay head*/
	if(*head == NULL)
		return;
	while (aux =! NULL)
	{	
		aux = *head;
		*head = aux;
		aux->next;
		free(aux);
	}
	*head = NULL;
}
