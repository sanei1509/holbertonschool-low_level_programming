#include "lists.h"

/**
**get_nodeint_at_index - return the nth node
*@head: pointer to a first node
*@index: index of node
*Return: a struct
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	current = head;
	/*necesitamos un contador para comparar con el index*/
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	return (current);

}
