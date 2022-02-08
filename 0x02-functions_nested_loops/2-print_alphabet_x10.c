#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - writes the alphabets 10 times in a row
 * Return: On success void.
 */

void print_alphabet_x10(void)
{
	int a = 1;

	while (a <= 10)
	{
	_putchar(a);
	a++;
	}
	return (0);

}

