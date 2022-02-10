#include <unistd.h>
#include "main.h"
/**
 * more_numbers- looks for uppercase
 * Return: On success void.
 */
void more_numbers(void);
{
	int i, a;

	for (i = '0'; i <= 14; i++)
	{
	for (a = '0'; a <= 10; a++)
	{

	putchar(a);
	putchar(a / 10 + '0');

	}
	}
	putchar('\n');
}
