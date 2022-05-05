#include "lists.h"

/**
*sum_dlistint - devuelve la suma de toda la data(n)
*@head: pointer to a first node of the list
*Return: 0 or result of the sum
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	/*si hay valores va a devolver el valor y sino 0*/
	return (sum);
}
