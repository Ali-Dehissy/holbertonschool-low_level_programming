#include "main.h"
#include <stdio.h>
/**
 * *rot13 - encodes to rot 13
 *@a : pointer
 * Return: Always 0.
 */
char *rot13(char *a)
{
	int i;
	int j;
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
		if (a[i] == alphabet[j])
	{
		a[i] = rot[j];
		break;
	}
	}
	return (a);
}
