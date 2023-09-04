#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - double the string to newly poinetr
 * @str: the sring
 * Return: a (success), NULL (fail)
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	i = 0;
	j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		j++;
	}
	a = malloc(sizeof(char) * (j + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	while ((a[i] = str[i]) != '\0')
	{
		i++;
	}
	return (a);
}
