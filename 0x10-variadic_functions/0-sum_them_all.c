#include "variadic_functions.h"

/**
 * sum_them_all - sum all the numbers in parameter
 * @n: the number of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		sum = sum + va_arg(list, int);
		i++;
	}

	va_end(list);

	return (sum);
}
