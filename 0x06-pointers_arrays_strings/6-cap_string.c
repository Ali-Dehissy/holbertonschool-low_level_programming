#include "main.h"
#include <stdio.h>
/**
 * *cap_string - chnage to uppercase
 *@s : pointer
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char  array[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] ; i++)
	{
	for (j = 0; j < 13; j++)
	{
	if ((i == 0 || s[i - 1] == array[i]) && (s[i] <= 97 && s[i] <= 122))
	{
	s[i] -= 32;
	}
	}
	}
	return (s);
}
