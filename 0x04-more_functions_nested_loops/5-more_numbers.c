#include "main.h"
/**
 * more_numbers - nmbr fct
 * Done by Herrings
 * Return: no return
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 14; j++)
		{
			if (j >= 10)
				-putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
