#include "variadic_functions.h"
#include <stdlib.h>
/**
 * sum_them_all - sum
 * @n : integer
 * @... : the rest
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int j;
	int s;

	s = 0;
	va_start(a, n);
	for (j = 0; j < n; j++)
		s += va_arg(a, int);
	va_end(a);
	return (s);
}
