#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - arrays of characters
 * @size : unsigned int
 * @c : char
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return ((void *)0);

	a = malloc(sizeof(char) * size);

	if (a == 0)
		return ((void *)0);
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
