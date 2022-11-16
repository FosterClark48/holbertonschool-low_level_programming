#include "hash_tables.h"
/**
*hash_table_print - prints hash table
*@ht: hash table
*Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *sp;

	if (!ht)
	{
		return;
	}
	printf("{");
	sp = "";
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", sp, temp->key, temp->value);
			sp = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
