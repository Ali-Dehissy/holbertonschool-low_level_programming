#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns pointer
 *@str : pointer
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *a;

	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	a = (char *)malloc(sizeof(char) * i + 1);
	if (a == NULL)
	{
	return (NULL);
	}
	for (j = 0; j < i; j++)
	{
	a[j] = str[j];
	}
	a[j] = '\0';

	return (a);
}
