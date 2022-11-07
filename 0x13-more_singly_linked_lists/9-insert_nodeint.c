#include "lists.h"
/**
*insert_nodeint_at_index - inserts a new node at a given position
*@head: double pointer to head nodes data
*@idx: index of list where new node is added
*@n: value of data in struct
*Return: address of new node or NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int count;

	temp = *head;

	if (idx != 0)
	{
		for (count = 0; count < idx - 1 && temp != NULL; count++)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL && idx != 0)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = temp->next;
		temp->next = newnode;
	}

	return (newnode);
}
