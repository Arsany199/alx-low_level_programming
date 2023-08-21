#include "main.h"
/**
 * swap_int - swaps the calues of two integers
 * @a: integer to change
 * @b: integer to swap with
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
