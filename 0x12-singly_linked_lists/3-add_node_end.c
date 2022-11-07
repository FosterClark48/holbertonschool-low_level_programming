#include "lists.h"
/**
*add_node_end - Adds a node at the end
*@head: pointer to first node
*@str: string to be duplicated
*Return: address of new element, NULL if fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	temp = *head;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (!(*head))
	{
		*head = newNode;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}

	return (newNode);
}
