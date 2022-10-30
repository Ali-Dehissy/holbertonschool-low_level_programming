#include "hash_tables.h"

/**
 * hash_table_create - a function to create a hash table
 * @size: The hash_table size
 * Return: pointer to a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *pt;
	unsigned long int i;

	pt = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (pt == NULL)
		return (NULL);
	pt->size = size;
	pt->array = (hash_node_t **)malloc(
		sizeof(hash_node_t *) * size);
	if (pt->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		pt->size = size;
		pt->array[i] = NULL;
	}
	return (pt);
}
