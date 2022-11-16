#include "hash_tables.h"
/**
*hash_table_get - retrieves a value linked to a key
*@ht: hash table looking into
*@key: key we are looking for
*Return: value related to element, NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht || !key)
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);

	temp = (ht->array)[i];
	while (temp != NULL && strcmp(temp->key, key) != 0)
	{
		temp = temp->next;
	}
	if (!temp)
	{
		return (NULL);
	}
	else
	{
		return (temp->value);
	}
}
