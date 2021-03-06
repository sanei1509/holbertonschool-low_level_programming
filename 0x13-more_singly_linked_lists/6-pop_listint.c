#include "lists.h"

/**
 *pop_listint - delete the head node of al list and return head data(n)
 *@head: pointer to a pointer
 *Return: 0 or head nodes's data
 */

int pop_listint(listint_t **head)
{
	listint_t *aux_2 = (*head);
	int result;

	if (*head == NULL)
		return (0);

	/*precisamos la data de la lista*/
	result = aux_2->n;
	*head = aux_2->next;

	free(aux_2);

	return (result);
}
