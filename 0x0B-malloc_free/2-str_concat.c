#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenate 2 strings
 * @s1: is the first string
 * @s2: is the sec string
 * Return: a (success), NULL (fail)
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	a = malloc(sizeof(char) * (l1 + l2 + 1));
	if (a == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < l1)
		{
			*(a + i) = *(s1 + i);
			i++;
		}
	}

	if (s2)
	{
		while (i < (l1 + l2))
		{
			*(a + i) = *(s2 + j);
			i++;
			j++;
		}
	}
	*(a + i) = '\0';

	return (a);
}
