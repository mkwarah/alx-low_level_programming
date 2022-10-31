#include "main.h"
#include <unistd.h>

/**
 * _putchar.c writes the c charxter to stdout
 * @c: The character to print
 *
 * Return: 1 success
 * On error, -1 is returned and errno is set approapriately 
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
