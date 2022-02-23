#include "main.h"
/**
 * _puts_recursion - puts
 *@s : pointer
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	_putchar(s[i]);
	}
	_putchar('\0');
}
int main ()
{
	
	_puts_recursion(char *s);
	
	return (0);
}
