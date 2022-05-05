#include "lists.h"

/**
 **add_nodeint - add a new node at the beginning
 *@head: pointer to a pointer que apunta al primer node
 *@n: data integers in the nodes
 *Return: direccion del nuevo elemento, or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	if (new_node != NULL)
	{
		/*le doy la data que me pasan al nuevo elemento*/
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	
	return (new_node);
}
