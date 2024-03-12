#include "search_algos.h"

/**
 * linear_search - performs linear search
 * @array: the integer array
 * @size: its size of the array
 * @value: value to search for
 * Return: the index found or -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
