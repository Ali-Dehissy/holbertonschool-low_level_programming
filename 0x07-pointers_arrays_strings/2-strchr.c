#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates string
 *@s : pointer
 *@c : char
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{

	while (*s++)
	if (*s == c)
	{
	return (s);
	}

	return (0);
}
