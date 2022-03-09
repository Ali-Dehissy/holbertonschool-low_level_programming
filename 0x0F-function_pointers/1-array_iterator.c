#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - array
 *@array : integer
 *@size : size_t
 *@action : pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (action != NULL && size > 0 && array != NULL)
	{
	for (j = 0 ; j < size ; j++)
	{
		action(array[j]);
	}
	}
}
