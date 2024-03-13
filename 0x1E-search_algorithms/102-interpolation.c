#include "search_algos.h"

/**
 * interpolation_search - performs jump search
 * @array: pointer to the first element in the array
 * @size: its size
 * @value: value to search for
 * Return: the index found or -1 if not
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, r = size - 1, l = 0;

	if (!array || !size)
	{
		return (-1);
	}
	while (r >= l)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	return (-1);
}
