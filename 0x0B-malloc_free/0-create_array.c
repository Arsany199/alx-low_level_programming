#include "main.h"
#include <stdlib.h>

/**
 * *creat_array - creates an array of chars
 * 		 and initializes it with a specific char
 * @size: the size of the array
 * @c: the character in the array
 *
 * Return: a (success), NULL (fail)
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	a = (char *)malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);
}
