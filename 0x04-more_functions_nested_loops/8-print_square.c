#include <unistd.h>
#include "main.h"
/**
 * print_square - print hashtags
 * @size : size
 * Return: On success void.
 */

void print_square(int size)
{
	char c = '#';
	int a, b;
	int size = 10;
	
	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
		_putchar(c);
	}
		_putchar('\n');
	}

	return (0);
}
