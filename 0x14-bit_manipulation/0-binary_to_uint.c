#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - change from binary to int
 * @h: is the pointer pointing to the binary
 *
 * Return: the output or '0' if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		output *= 2;
		output += (b[i] - '0');
		i++;
	}
	return (output);
}
