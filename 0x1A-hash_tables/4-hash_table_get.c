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
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	/* if index is greater that array's size */
	if (index >= ht->size)
		return (NULL);
	/* if and index in the array is no null */
	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			/* compare key to check for collision */
			if (strcmp(key, temp->key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
