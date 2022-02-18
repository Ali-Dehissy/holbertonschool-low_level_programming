#include "main.h"
#include <stdio.h>
/**
 * *cap_string - change to uppercase
 *@s : pointer
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i;
	int j;
	int r = 13;
	char n[] = {32, '\t', '\n', 59, 33, 63, 34, '(', ')', '{', '}', 44, 46};

	for (i = 0; s[i]; i++)
	{
	for (j = 0; j < r; j++)
	{
		if ((i == 0 || s[i - 1] == n[j]) && (s[i] >= 97 && s[i] <= 122))
			s[i] -= 32;
	}
	}
	return (s);
}
