#include "lists.h"

/**
*sum_listint - return the sum of all the data (n) -> list_name
*@head: pointer to a first node of the list
*Return: 0 or result of the sum
*/

int sum_listint(listint_t *head)
{
	listint_t ptr;

	ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr;
		ptr = ptr->next;
	}

	return (sum);
}
