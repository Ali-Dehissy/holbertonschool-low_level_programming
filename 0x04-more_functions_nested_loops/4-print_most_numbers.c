#include <unistd.h>
#include "main.h"
/**
 * print_most_numbers - looks for uppercase
 * Return: On success void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	if (i != '2' && i != '4')
	{
	_putchar(i);
	}
}
}
