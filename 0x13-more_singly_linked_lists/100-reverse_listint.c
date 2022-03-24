#include "lists.h"

/**
**reverse_listint - reverse a linked list
*@head: pointer to a pointer to a first node
*Return: a pointer to the first node of reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *sig;

	while (*head != NULL)
	{
		sig = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = sig;
	}
	*head = prev;
	return (*head);
}
