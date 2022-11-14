#include "lists.h"
/**
*get_dnodeint_at_index - Returns the nth node of a linked list listint_t
*@head: pointer to head node data
*@index: index of node, starting at 0
*Return: node, if none exists return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head != NULL; x++)
	{
		head = head->next;
	}

	return (head);
}
