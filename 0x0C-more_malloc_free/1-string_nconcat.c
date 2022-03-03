#include "main.h"
/**
 * *string_nconcat - concatenate
 *@s1 : pointer
 *@s2 : pointer
 *@n : int
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k;
	char *a;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	a = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (a == NULL)
		return (NULL);
	for (k = 0; k < (strlen(s1) + n); k++)
	{
	if (k < strlen(s1))
		a[k] = s1[k];
	else
		a[k] = s2[k - strlen(s1)];
	}
	a[k] = '\0';
	return (a);

}
