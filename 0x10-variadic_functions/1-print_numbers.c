#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator != NULL)
	{
		va_start(list, n);

		i = 0;
		while (i < n)
		{
			printf("%d, ", va_arg(list, int));
			i++;
		}
	}
}
