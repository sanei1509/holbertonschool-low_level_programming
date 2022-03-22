#include "lists.h"

/**
*getNode - crate and return node
*@n: integers n
*Return: newnode
*/
listint_t *getNode(int n)
{
	listint_t *newNode;
	
	newNode = malloc(sizeof(listint_t));

	if(newNode != NULL)
	{
	/**inserting data*/
	newNode->n = n;
	newNode->next = NULL;
	return newNode;
	}
	return(NULL);
}

/**
**insert_nodeint_at_index - put the node in a given position
*@head: pointer to a pointer to a first node
*@idx: given position
*@n: data of node
*Return: a struct
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	unsigned int size = 0;

	if (idx < 1 || idx > size + 1)
		return (NULL);
	while (idx--)
	{
		if (idx == 0)
		{
		/*adding node at idx*/
			temp = getNode(n);
			temp->next = *head;
			*head = temp;
		}
		else
		head = &(*head)->next;
	}
	size++;
	return(temp);
}
