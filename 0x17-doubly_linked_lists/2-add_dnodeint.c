#include "lists.h"

/**
 **add_node - add a new node at the beginning
 *@head: pointer to a pointer que apunta al primer node
 *@n: data integers in the nodes
 *Return: direccion del nuevo elemento, or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	
	if(new_node == NULL)
		return(NULL);

	if (new_node != NULL)
	{
		/*le doy la data que me pasan al nuevo elemento*/
		new_node->n = n;
		new_node->next = (*head);
		*head = new_node;
	}
	else
		return (NULL);
	
	return (*head);
}
