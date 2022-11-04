#include "lists.h"
/**
*list_len - returns the number of elements in a linked list_t list
*@h: pointer to head node
*Return: count of elements in list
*/
size_t list_len(const list_t *h)
{
	if (!h)
	{
		return (0);
	}
	else
	{
		return (1 + list_len(h->next));
	}
}
