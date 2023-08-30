#include "main.h"

/**
 * _pow_recursion - raise the x to the power of y
 * @x: is the value to be raised
 * @y: the power
 * Return: -1 if y less than 0
 * 	   pow_recursion is success
 * 	   1 if else
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
