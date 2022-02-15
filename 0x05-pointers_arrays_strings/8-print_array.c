#include "main.h"
/**
 * print_array - print array
 *@a : pointer
 *@n : pointer
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (i == 0)
	{
	printf("%d", n);
	}
	else
	{
	printf(", %d", n);
	}
	}
	{
	_putchar('\n');
	}
}
