#include "lists.h"
/**
*free_list - deallocates a linked list
*@head: pointer to first node
*Return: void
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
