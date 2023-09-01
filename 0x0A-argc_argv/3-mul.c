#include "main.h"
#include <stdio.h>

/**
 * main - multiply 2 numbers
 * @argc: argc parameter
 * @argv: array of commands
 * Return: 0 if seccess 1 or error if fail
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;
	printf("%d\n", result);
	return (0);
}
