#include "lists.h"
/**
*pop_listint - deletes head node of linked list
*@head: double pointer to head value in main
*Return: Head nodes data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (!(*head))
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;

	x = temp->n;
	free(temp);

	return (x);
}
