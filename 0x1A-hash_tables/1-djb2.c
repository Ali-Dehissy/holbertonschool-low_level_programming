#include "hash_tables.h"

/**
 * hash_djb2 - a hash function with the djb2 algorithm
 * @str: pointer
 * Return: a long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hs;
	int c;

	hs = 5381;
	while ((c = *str++))
	{
		hs = ((hs << 5) + hs) + c;
	}
	return (hs);
}
