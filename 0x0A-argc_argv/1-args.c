#include "main.h"
#include <stdio.h>

/**
 * main - print number of the argument
 * @argc: the number
 * @argv: the array of commands
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{

	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
