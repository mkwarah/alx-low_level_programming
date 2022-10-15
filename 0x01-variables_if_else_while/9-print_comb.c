#include<stdio.h>
/**
 * main - printing possible combination of  a single digital numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i!= 57)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
