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
	int a, b;

	for (a = '0' ; a <= '9' ; a++)
	{
	putchar(a);
	}
	for (b = 'a' ; b <= 'f' ; b++)
	{
	putchar(b);
	}
	return (0);
}

