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
		printf("0");
		return;
	}

	else
	{
		print_binary(n >> 1);
		printf("%ld", n & 1);
	}


}
