#include "lists.h"

/**
**add_node_end - function that create a new node at the end
*@head: pointer to a first node of the list_t
*@str: need to be duplicated
*Return: direction of new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	/*necesito crear dos nodos*/
	list_t *new_node = NULL;
	list_t *temp = *head;

	/*solo voy a guardar espacio para el nuevo nodo*/
	new_node = (malloc(sizeof(list_t)));

	if (new_node == NULL)
		return (NULL);
	/*asigno a temp el lugar de el ultimo*/
	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = strlen(str);

	/*si solo tengo un solo nodo significa que el head es mi ult*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*buscamos el ultimo nodo*/
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/* temp next es el ultimo y se iguala al nuevo nodo*/
	temp->next = new_node;
	return (new_node);
}
