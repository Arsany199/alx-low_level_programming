#include "main.h"

/**
 * get_endianness - checks for endianness
 *
 * Return: 0 if big or 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;

	return ((int) *c);
}
