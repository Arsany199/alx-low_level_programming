#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add 2 int
  * @a: int 1
  * @b: int 2
  *
  * Return: add
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtract 2 int
  * @a: int 1
  * @b: int 2
  *
  * Return: subtraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - mul 2 int
  * @a: int 1
  * @b: int 2
  *
  * Return: multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divide 2 int
  * @a: int 1
  * @b: int 2
  *
  * Return: the division
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
  * @a: int 1
  * @b: int 2
  *
  * Return: the remainder
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
