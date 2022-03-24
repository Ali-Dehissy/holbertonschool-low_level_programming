#include "main.h"
/**
 *print_binary- representation
 *@n: number to be printed
 *Return: ...
 */
void print_binary(unsigned long int n)
{
	 unsigned int i;

	for (i = 1 << 11; i > 0; i >>= 1)
        printf("%u", !!(n & i));
}
