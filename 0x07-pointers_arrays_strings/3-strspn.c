#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets length of prefix
 *@s : pointer
 *@accept : pointer
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k;
	unsigned int len, pres;

	len = 0;
	pres = 0;
	for (i = 0; s[i] != 0; i++)
	{
	for (k = 0; accept[k] != '\0'; k++)
	{
	if (accept[k] == s[i])
	{
		len++;
		pres = 1;
		break;
	}
	else
	{
		pres = 0;
	}
	}
	if (pres == 0 & len > 0)
		break;
	}
	return (len);

}
