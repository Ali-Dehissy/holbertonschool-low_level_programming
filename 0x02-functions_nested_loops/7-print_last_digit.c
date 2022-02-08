#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The character to print
 * Return: On success void.
 */
int print_sign(int n)
{
	if ((n % 10) < 0)
	{
	_putchar((-1 * (n % 10)) + 0));
	return (-1 * (n % 10));

	else

	_putchar((n % 10) + 0);
	return (n % 10);
	}
}
