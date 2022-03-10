#include "variadic_functions.h"
/**
 * sum_them_all - sum
 * @n : input parameters
 * @... : the rest
 * Return: int, sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int s = 0;

	va_start(a, n);

	for (i = 0; i < n; i++)

	s += va_arg(a, int);
	va_end(a);
	return (s);
}
