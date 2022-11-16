#include "lists.h"
/**
*delete_dnodeint_at_index - Deletes node at the index of linked list
*@head: double pointer to head node value
*@index: index of node that should be deleted
*Return: 1 for Success, -1 for failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *temp = NULL;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}
	for (count = 0; count < index; count++)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}
	if (ptr->next)
	{
		temp = ptr->next;
		temp->prev = ptr->prev;
	}
	if (ptr->prev)
	{
		temp = ptr->prev;
		temp->next = ptr->next;
	}
	free(ptr);
	if (index == 0)
	{
		*head = temp;
	}

	return (1);
}
