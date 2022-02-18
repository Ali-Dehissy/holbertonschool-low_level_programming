#include "main.h"
#include <stdio.h>
/**
 * *leet - converts into 1337
 *@a : pointer
 * Return: Always 0.
 */
char *leet(char *a)
{
	int i;
	int j;
	char *string = "aAeEoOtTlL";
	char *integer = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	if (a[i] == string[j])
	{
	a[i] = integer[j];
	}
	}
	return (a);
}
