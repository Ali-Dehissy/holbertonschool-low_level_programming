#include <unistd.h>
#include "main.h"
/**
 * print_numbers - looks for uppercase
 * Return: On success void.
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	_putchar(i);
	}
	{
	_putchar('\n');
	}
}
