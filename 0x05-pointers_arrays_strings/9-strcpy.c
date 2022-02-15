#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copy the string pointed
 *@dest : pointer
 *@src : pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
