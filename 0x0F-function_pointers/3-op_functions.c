#include "clac.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add 2 int
 * @a: the first int
 * @b: the sec int
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 int
 * @a: the first int
 * @b: the sec int
 * Return: subtract
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply 2 int
 * @a: the first int
 * @b: the sec int
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divid 2 int
 * @a: the first int
 * @b: the sec int
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - remainder of 2 int
 * @a: the first int
 * @b: the sec int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
