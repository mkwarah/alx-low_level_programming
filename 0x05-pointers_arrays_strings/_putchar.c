#include <unistd.h>

/**
 * _putchar - writes character c to the standard output
 * @c: char to be printed
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
