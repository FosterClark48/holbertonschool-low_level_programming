#include "hash_tables.h"
/**
*hash_table_create - function that creates a hash table
*@size: size of array
*Return: pointer to new hash table, NULL if failed
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		return (NULL);
	}
	array = malloc(sizeof(hash_table_t *) * size);
	if (!array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}
	table->array = array;
	table->size = size;

	return (table);
}
