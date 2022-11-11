#include "lists.h"
/**
*add_dnodeint_end - adds node at end of list
*@head: double pointer to head node
*@n: value in struct
*Return: address of new element, NULL if fail
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	if (!(*head))
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->n = n;
	new->next = NULL;
	new->prev = temp;
	temp->next = new;

	return (new);
}
