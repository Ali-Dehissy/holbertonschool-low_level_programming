#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies bytes from n
 *@dest : pointer
 *@src : pointer
 *@n : positive integer
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
	dest[j] = src[j];
	}

	return (dest);
}
