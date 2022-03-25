#include "main.h"
/**
 * flip_bits - flip bits
 *@n : unisgned long int
 *@m : unsigned long int
 *Return: index
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int j = 0;
	unsigned int k;

	k = n ^ m;

	while (k > 0)
	{
	j += (k & 1);
	k >>= 1;
	}

	return (j);
}
