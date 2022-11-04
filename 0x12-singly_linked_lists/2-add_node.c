#include "lists.h"
/**
*add_node - Adds new node to start of linked list
*@head: double pointer to head node
*@str: string to be duplicated
*Return: address of new element, NULL if fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (!str)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
