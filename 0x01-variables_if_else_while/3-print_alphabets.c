#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
* Return: Always 0 (Success)
*/
in
int main(void)
{
	char ch;

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
