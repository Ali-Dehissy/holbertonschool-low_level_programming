#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **a;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	a = (int **)malloc(sizeof(int) * height + 1);
	if (a == NULL)
	{
	free(a);
	return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	a[i] = (int *)malloc(sizeof(int) * width + 1);
	if (a[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(a[j]);
	free(a);
	return (NULL);
	}
	}
	for (j = 0; j < width; j++)
	{
	a[i][j] = 0;
	}
	}
	return (a);
}
