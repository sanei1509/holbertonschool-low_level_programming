#include "lists.h"

/**
*delete_dnodeint_at_index - Eliminar un nodo en posicion dada
*@head: pointer to a pointer pointing a first node
*@index: indice of node to delete
*Return: 1(succes) - 2(failed)
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *next;
	unsigned int i = 0;

	/*si esta vacia*/
	if (*head == NULL || head == NULL)
		return (-1);
	/*guardamos el primer nodo*/
	aux = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	for (; aux->next != NULL && i < index - 1; i++)
		aux = aux->next;

	if (aux->next == NULL || aux == NULL)
		return (-1);

	next = aux->next->next;
	free(aux->next);
	aux->next = next;

	return (1);
}
