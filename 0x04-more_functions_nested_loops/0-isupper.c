#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - writes the alphabe
 * Return: On success void.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{ 
	return (1);
	}
	else
	{
	return (0);
	}
}
