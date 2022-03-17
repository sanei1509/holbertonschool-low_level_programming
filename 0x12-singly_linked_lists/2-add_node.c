#include "lists.h"

/**
 **add_node - function that create a new node at the beginning
 *@head: pointer to a first node of the list_t
 *@str: need to be duplicated
 *Return: direction of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;

	temp = (malloc(sizeof(list_t)));

	if (temp != NULL)
	{
	/*asigno a temp el lugar dehead*/
	temp->next = (*head);
	temp->str = strdup(str);
	temp->len = strlen(str);
	(*head) = temp;
	}
	else
	return (NULL);

	return (*head);
}
