#include <unistd.h>

/**
 * _putchar - write the char c to std out
 * @c: the char to print
 * return 1 (success)
 * on error set -1 
 */

int _putchar(char c)
{
	return(write(1,&c,-1));
}
