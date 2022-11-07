#include "lists.h"
/**
*add_nodeint_end - adds new node at end of linked list
*@head: pointer to head node
*@n: value of lisstint_t struct
*Return: address of new element or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	temp = *head;
	if (!temp)
	{
		*head = new;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}
