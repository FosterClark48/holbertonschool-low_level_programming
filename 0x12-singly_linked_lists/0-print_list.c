#include "lists.h"
/**
*print_list - Prints all elements of a list
*@h: pointer to head node (first node)
*Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
