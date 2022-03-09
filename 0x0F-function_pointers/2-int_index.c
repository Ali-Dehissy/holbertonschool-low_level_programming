#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index- search for integer
 *@size : integer
 *@cmp : function
 *@array : pointer
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL && size > 0)
	{
	for (k = 0 ; k < size ; k++)
	{
		if (cmp(array[k]) != 0)
	{
		return (k);

	}
	}
	}
	return (-1);


}
