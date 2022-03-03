#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked - malloc check
 *@b : pointer
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);
	if (r == NULL)
	exit(98);
	return (r);
}
