#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers
* @array: an array
* @size: the size of the array
* @value: value to search for
* Return: the value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (!array)
		return (-1);
	j = 0;
	while (j < size)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
