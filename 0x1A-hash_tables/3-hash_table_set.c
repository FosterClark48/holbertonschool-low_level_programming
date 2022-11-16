#include "hash_tables.h"
/**
*hash_table_set - adds an element to the hash table
*@ht: hash table to add  or update key/val to
*@key: key, can not be empty string
*@value: value related to key
*Return: 1 = success, 0 = failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *tempval;
	unsigned long int i, index;

	if (!ht || !key || *key == '\0' || !value)
	{
		return (0);
	}
	tempval = strdup(value);
	if (!tempval)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = tempval;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(tempval);
		return (0);
	}
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = tempval;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
