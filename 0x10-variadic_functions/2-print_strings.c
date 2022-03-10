#include "variadic_functions.h"
/**
 * print_strings - prints string
 * @n : unsigned integer
 * @separator : const char
 * @... : function
 * Return: integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	char *i;
	unsigned int j;

	va_start(a, n);

	for (j = 0; j < n; j++)
	{
	i = va_arg(a, char *);

	if (i != NULL)
		printf("%s", i);
	else
		printf("(nil)");
	if (separator != NULL && j != n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
