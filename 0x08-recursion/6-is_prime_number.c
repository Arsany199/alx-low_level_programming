#include "main.h"

/**
 * prime - tests whether the number is divisible
 * @n: the number being tested
 * @i: the divisor
 *
 * Description: The function finds whether the number is divisible
 * by 2 and return the value
 * Return: result
 */
int prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}

	if (i == n / 2)
	{
		return (1);
	}

	return (prime(n, i + 1));
}

/**
 * is_prime_number - is the integer a prime number
 * @n: the number being tested
 *
 * Description: The function tests whether is a prime number
 * and returns the appropriate value.
 * Return: result
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n <= 3)
	{
		return (1);
	}

	return (prime(n, i));
}
