#include "main.h"
#include <stdio.h>
/**
 * *_memset - prints buffer in hexa
 *@s: pointer
 *@b : char
 *@n : positive integer
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
	*(s + j) = b;
	}

	return (s);
}
