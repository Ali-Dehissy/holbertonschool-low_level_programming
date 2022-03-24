#include "main.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b : const char
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
	if (*b == '0')
		j <<= 1;
	else if (*b == '1')
		j = (j << 1) | 1;
	else
		return (0);
	b++;
	}
	return (j);
}
