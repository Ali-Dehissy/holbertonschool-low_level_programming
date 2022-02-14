#include "main.h"
#include <string.h>
/**
 * print_rev - print string in reverse
 *@s : pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, a;

	a = *s;
	for (i = a; i >= a; i--)
	{
	_putchar(i);
	{
	_putchar('\n');
	}
}
