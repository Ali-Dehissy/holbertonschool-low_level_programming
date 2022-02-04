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
	char ch, chh;
	for (chh = 'a' ; ch <= 'z' ; ch++)
	{
	putchar(chh);
	}	
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
