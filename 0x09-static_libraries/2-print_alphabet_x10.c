#include "main.h"
/**
 * print_alphabet_x10 - printing the alphabet in small letters ten times
 * Nothing to return here
 */
void print_alphabet_x10(void)
{
	char x;
	int count = 0;

	while (count++ <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
		_putchar(x);
		}
	_putchar('\n');
	}
}
