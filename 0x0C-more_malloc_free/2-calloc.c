#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates arrays
 *@nmemb : unsigned int
 *@size  : unsigned int
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < nmemb * size; j++)
	{
		a[j] = 0;
	}
	return (a);
}
