#include "main.h"
#include <stdio.h>

/**
 * print_binary - change numbers to binary
 * @n: the remainder to print as binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		_putchar('0' + (int)(n & 1));
		n >>= 1;
	}
}
