#include "lists.h"
/**
*free_listint2 - function that frees a linked list and sets head to NULL
*@head: double pointer to head in main
*Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head != NULL)
	{
		current = *head;
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
