#include "main.h"
/**
 * puts2 - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str)
{	
	int i;

	for (i = 0; str[i] != \0; i++)
	{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
	else
	{
	_putchar(str[i] - 1);
	}
}
