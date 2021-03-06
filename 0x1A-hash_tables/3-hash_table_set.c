#include "hash_tables.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to pointer
 * @key: pointer
 * @value: pointer to value node
 * Return: the address of the new element, or NULL if it fails
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = *head;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer
 * @key: pointer to array
 * @value: pointer value store
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (add_node(&(ht->array[index]), key, value) == NULL)
		return (0);

	return (1);
}
