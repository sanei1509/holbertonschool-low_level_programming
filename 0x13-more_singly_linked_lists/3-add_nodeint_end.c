#include "lists.h"

/**
**add_nodeint_end - add a new node at the end of listint_n
*@head: pointer to a pointer to a first node
*@n: receive a integer n
*Return: the address of the new elemment NULL if fail
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *aux;

	aux = *head;
	/*guardando espacio para nuevo nodo*/
	new_node = malloc(sizeof(listint_t));
	/*comprobar si es nulo*/
	if (new_node != NULL)
	{
		new_node->next = NULL;
		new_node->n = n;
	}
	else
		return (NULL);
	/*si solo hay un nodo*/
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
	/*recorrer hasta el ultimo*/
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	/*igualar el nuevo nodo al que queda al salir del while*/
	aux->next = new_node;
	}
	return (new_node);
}
