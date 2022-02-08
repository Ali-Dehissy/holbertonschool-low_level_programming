#include <unistd.h>
#include "main.h"
/**
 * _isalpha - checks for lowercase
 * @c: The character to print
 * Return: On success void.
 */

int _isalpha(int c);
{
	if (c >= 'a' && c <= 'z')
	|| if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

