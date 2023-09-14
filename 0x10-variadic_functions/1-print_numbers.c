#include "variadic_functions.h"


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
			printf("%d\n", va_arg(list, int));
			i++;
		}
	}
}
