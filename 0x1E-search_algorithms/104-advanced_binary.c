#include "search_algos.h"

/**
 * advanced_binary_recursive - performs advanced binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 * Return: the index found or -1 if not
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i = left;

	if (right < left)
	{
		return (-1);
	}

	printf("Searching in array: ");
	while (i < right)
	{
		printf("%d, ", array[i]);
		i++;
	}
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}
/**
  * advanced_binary - Searches in a sorted array using advanced binary search
  * @array: A pointer to the first element of the array to search
  * @size: The number of elements in the array
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL -1
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
	{
		return (-1);
	}
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
