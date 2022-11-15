#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to hash table data structure
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL, *new = NULL;
   unsigned long int j = 0;
	
   if (k == NULL)
		return;

	while (j < k->size)
	{
		new = k->array[j];
		while (temp)
		{
			temp = new;
			new = new->next;
			if (temp->key != NULL)
				free(temp->key);
			if (temp->value != NULL)
				free(temp->value);
			free(temp);
		}
		free(k->array[j]);
		j++;
	}
	free(k->array);
	free(k);
}
