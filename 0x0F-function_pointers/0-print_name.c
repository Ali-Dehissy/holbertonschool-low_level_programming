#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name : pointer
 * @f : pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
