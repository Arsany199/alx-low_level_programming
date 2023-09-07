#include "main.h"
#include <stdlib.h>

/**
 * array_range - creats array of int
 * @min: the smallest number
 * @max: the biggest number
 * Return: pointer to the first element in the array
 */
int *array_range(int min, int max)
{
	int i, R;
	int *p;

	R = 0;

	if (min > max)
		return (NULL);

	R = ((max + 1) - min);

	p = malloc(R * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < R; i++)
	{
		p[i] = min + 1;
	}
	return (p);
}
