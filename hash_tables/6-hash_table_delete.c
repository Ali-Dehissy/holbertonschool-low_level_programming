#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to hash table data structure
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *top = NULL;
	hash_node_t *tempo = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		top = ht->array[i];
		while (top != NULL)
		{
			tempo = top->next;
			free(top->key);
			free(top->value);
			free(top);
			top = tempo;
		}
	}
	free(ht->array);
	free(ht);
}
