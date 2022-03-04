#include "main.h"
#include <stdlib.h>
/**
 * array_range - array of integers
 * @min : integer
 * @max : integer
 * Return: integer
 */
int *array_range(int min, int max)
{
	int a;
	int i;
	int k;

	k = 0;
	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
	a[k] = i;
	a++;
	}
	return (a);
}
