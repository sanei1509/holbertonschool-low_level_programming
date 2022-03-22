#include "lists.h"

/**
 *pop_listint - delete the head node of al list and return head data(n)
 *@head: pointer to a pointer
 *Return: 0 or head nodes's data
 */

int pop_listint(listint_t **head)
{
	listint_t *aux_2 = *head;

	/*precisamos la data de la lista*/
	int result = (*head)->n;

	*head = (*head)->next;

	if (head == NULL)
		return (0);

	free(aux_2);
	return (result);
}
