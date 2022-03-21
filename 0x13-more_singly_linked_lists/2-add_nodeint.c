#include "lists.h"

/**
 **add_nodeint - add a new node at the beginning of listint_n
 *@head: pointer to a pointer to a first node
 *@n: receive a integer n
 *Return: the address of the new elemment NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/*guardando espacio para nuevo nodo*/
	new_node = malloc(sizeof(listint_t));

	if (new_node != NULL)
	{
	/*convertimos el nuevo nodo a primer nodo*/
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	}
	else
	{
		return (NULL);
	}
	return (*head);

}
