#include "main.h"
/**
 * str_concat - concatenates
 * @s1 : pointer
 * @s2 : pointer
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int l;
	char *a;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;

	a = malloc(sizeof(char) * (i + j + 1));

	if (a == 0)
		return ((void *)0);
	for (l = 0; l <= (i + j); l++)
	{
	if (l < i && s1[l] != '\0')
		a[l] = s1[l];
	else
		a[l] = s2[l - i];
	}
	return (a);
}
