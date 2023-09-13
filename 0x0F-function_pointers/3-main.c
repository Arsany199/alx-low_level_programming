#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the number of elements in argv
 * @argv: the array
 *
 * Return: 0 on success or NULL in fail
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
