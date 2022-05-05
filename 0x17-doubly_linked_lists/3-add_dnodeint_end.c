#include "lists.h"

/**
 **add_dnodeint_end - crear un nuevo nodo en el final de la lista
 *@head: pointer to the first node of the list
 *@n: data integer
 *Return: nuevo nodo
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*creo el nuevo nodo y un auxiliar*/
	dlistint_t *newNode;
	dlistint_t *aux = *head;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;
	}
	/*si solo tenemos un nodo o no tenemos*/
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	/*aux sale siendo el ultimo*/
	aux->next = newNode;
	newNode->prev = aux;

	return (newNode);
}
