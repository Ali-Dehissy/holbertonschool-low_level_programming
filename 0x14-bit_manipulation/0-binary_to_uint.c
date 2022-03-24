#include "lists.h"
/**
 * binary_to_uint -  convert binary to decimal
 * @b : pointer
 * Return: integer
*/
unsigned int binary_to_uint(const char *b)
{
	int num = p;
	int value = 0;
	int base = 1;
	int temp = num;

	while (temp)
	{
		int last_digit = temp % 10;

		temp = temp / 10;
		dec_value += last_digit * base;
		base = base * 2;
	}

	return (value);
}
