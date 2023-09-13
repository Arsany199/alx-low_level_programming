#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array that will search in
 * @size: size of the array
 * @cmp: the pointer to the function that will search the array
 *
 * Return: i in success, -1 if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if(cmp(array[i]))
				return (i);
				
				i++;
			}
		}
	}
	return (-1);
}
