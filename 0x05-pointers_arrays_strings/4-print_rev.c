#include "main.h"
#include <string.h>
/**
 * print_rev - print string in reverse
 *@s : pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int g;

	for (i = 0; s[i] != '\0'; i++)
	;
	for (g = i - 1; g >= 0; g--)
	{
	putchar(s[g]);
	}
	{
	putchar('\n');
	}

}
