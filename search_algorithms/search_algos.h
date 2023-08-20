#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * struct skiplist_search - Singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 */
typedef struct skiplist_search
{
	int n;
	size_t index;
	struct skiplist_search *next;
	struct skiplist_search *express;
} skiplist_t;


int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);


#endif
