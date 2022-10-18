#include "main.h"
/**
 * print_last_digit - printing the last digit of a number
 * @n: the number we will use
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int ln = n % 10;

	if (ln < 0)
		ln *= -1;
	_putchar(ln + '0');
	return (0);
}
