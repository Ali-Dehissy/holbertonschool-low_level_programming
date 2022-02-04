#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
* Return: Always 0 (Success)
*/


int main(void)
{
	int ch = '0';
	int v = ',';
	int s = ' ';

	for (ch = '0' ; ch <= '9' ; ch++)
	{
	putchar(ch);
	if (ch != '9')
	{
	putchar(v);
	putchar(s);
	}
	}
	putchar('\n');

	return (0);
}
