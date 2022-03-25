#include "main.h"
/**
 *get_bit - returns the value of a bit
 *@n : unisgned long integer
 *@index : unsigned integer
 *Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (n) * 8)

		return (-1);

	if ((n & (1 << index)) == 0)

		return (0);

	else

	return (1);
}
