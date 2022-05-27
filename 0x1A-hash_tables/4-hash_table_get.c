#include "hash_tables.h"

/**
 * hash_table_get - a function to get a value by the key
 * @ht: The hash table
 * @key: key pointer
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *crnt;
	int j;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, j->size);
	crnt = j->array[index];
	if (crnt == NULL)
		return (NULL);
	while (crnt != NULL)
	{
		j = strcmp(key, crnt->key);
		if (j == 0)
			return (crnt->value);
		crnt = crnt->next;
	}
	return (NULL);
}
