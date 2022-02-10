#include <unistd.h>
#include "main.h"
/**
 * _isdigit - looks for digit
 * @c : integer
 * Return: On success void.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
