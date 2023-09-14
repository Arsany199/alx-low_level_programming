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

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		if (separator == NULL)
		{
			printf("%d, ", va_arg(list, int));
			i++;
		}
		else if (separator && i == 0)
		{
			printf("%d", va_arg(list, int));
			i++;
		}
		else
		{
			printf("%s%d", separator, va_arg(list, int));
			i++;
		}
	}
	putchar('\n');

	va_end(list);
}
