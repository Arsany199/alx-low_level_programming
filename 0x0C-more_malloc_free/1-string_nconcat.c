#include "main.h"
#include <stdlib.h>

/**
 * _strlen - clac the length
 * @s: the string
 * Return: string lrngth
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
		return (i);
}


/**
 * string_nconcat - concaniate 2 strings
 * @s1: the string number 1
 * @s2: the string number 2
 * @n: the number of bytes of string 2
 * Return: pointer to the concaniate string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j, num, len;

	num = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (num < 0)
	{
		return (NULL);
	}
	if (num >= _strlen(s2))
	{
		num = _strlen(s2);
	}
	len = _strlen(s1) + num + 1;
	p = malloc(sizeof(*p) * len);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < num; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';

	return (p);
}
