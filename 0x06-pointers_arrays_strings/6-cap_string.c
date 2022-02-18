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
	char  array[11] ={' ' , ',' , ';' , '.' , '!' , '?' , '"' , '(' , ')' , '{' , '}' , '\t' , '\n' };


	for (i = 0; s[i] != '\0'; i++)
	{
	if (i ==0)
	{
	
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] = s[i] - 32;
	}
	else if  (s[i] == array[20])
	{
	i++;
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] = s[i] - 32;
	}
	}	
	}
	}
	
	return (s);
}
