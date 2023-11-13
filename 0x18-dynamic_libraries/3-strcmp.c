#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: string no. 1
 * @s2: string no. 2
 * Return: 0 if s1 & s2 are equal else 1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
