#include "hash_tables.h"

/**
 * key_index - a function to get the index of a key
 * @key: pointer key
 * @size: the hash table size
 * Return: a long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
