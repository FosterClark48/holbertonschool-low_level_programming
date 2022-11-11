#include "lists.h"
/**
*add_dnodeint - adds node at beginning
*@head: double pointer to head node
*@n: value of struct
*Return: address of new element, NULL if fail
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		return (NULL);
	}
	if (*head)
	{
		(*head)->prev = newNode;
	}
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;

	return (newNode);
}
