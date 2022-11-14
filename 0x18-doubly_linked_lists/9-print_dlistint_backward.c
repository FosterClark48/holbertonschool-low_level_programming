#include "lists.h"
/**
*print_dlistint_backward - Prints elements of list backwards
*@h: pointer to head node
*Return: Number of nodes
*/
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count;

	while (h->next)
	{
		h = h->next;
	}
	for (count = 0; h; count++, h = h->prev)
	{
		printf("%i\n", h->n);
	}
	return (count);
}
