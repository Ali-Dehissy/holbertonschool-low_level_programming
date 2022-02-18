#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse integer
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int l;
	int h = n - 1;
	int tempo;

	for (l = 0; l < h; l++, h--)
	{

		tempo = a[l];
		a[l] = a[h];
		a[h] = tempo;
	}

}
