#include <stdio.h>
/**
 * main - reversing alphabet
 * Return: 0
 */
int main(void)
{
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26, i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
}
