#include "lists.h"
/**
*free_listint - frees linked list listint_t
*@head: pointer to head node in main
*Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
