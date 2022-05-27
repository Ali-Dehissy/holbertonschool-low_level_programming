#include "hash_tables.h"

/**
 * hash_table_get - a function to get a value by the key
 * @ht: The hash table
 * @key: key pointer
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int j = 0;

	if (!key || !*key || !ht)
		return (NULL);
	j = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[j];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, (char *)key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
