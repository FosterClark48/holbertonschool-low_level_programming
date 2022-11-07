#include "lists.h"
/**
*listint_len - function that returns the num of elements in linked list
*@h: pointer to header node
*Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
