#include <unistd.h>
#include "main.h"
/**
 * islower - writes the alphabets 10 times in a row
 * Return: On success void.
 */

int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
