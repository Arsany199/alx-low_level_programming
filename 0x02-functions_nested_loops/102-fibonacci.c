#include <stdio.h>
/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i, first = 1, second = 2, next;

	for (i = 0; i < 50; i++)
	{
		next = first + second;
		printf("%d, ", next);
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}
