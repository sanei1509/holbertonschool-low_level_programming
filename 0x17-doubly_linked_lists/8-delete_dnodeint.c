#include "lists.h"

/**
 *deleteNode - delete no in a doubly linked list
 *@head_ref: pointer to head node pointer.
 *@del: pointer to node to be deleted.
 */
void deleteNode(dlistint_t **head_ref, dlistint_t *del)
{
	if (*head_ref == NULL || del == NULL)
		return;

	if (*head_ref == del)
		*head_ref = del->next;

	if (del->next != NULL)
		del->next->prev = del->prev;

	if (del->prev != NULL)
		del->prev->next = del->next;

	free(del);
}

/**
*delete_dnodeint_at_index - Eliminar un nodo en posicion dada
*@head: pointer to a pointer pointing a first node
*@index: indice of node to delete
*Return: 1(succes) - 2(failed)
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i = 0;

	/*si esta vacia*/
	if (*head == NULL)
		return (-1);
	/*guardamos el primer nodo*/
	aux = *head;

	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}

	for (; aux != NULL && i < index - 1; i++)
		aux = aux->next;

	if (aux == NULL || aux->next == NULL)
		return (-1);

	deleteNode(head, aux);

	return (1);
}
