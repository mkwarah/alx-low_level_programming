#include "main.h"
/**
 * print_last_digit - printing the last digit of a number
 * @n: the number we will use
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (0);
}
