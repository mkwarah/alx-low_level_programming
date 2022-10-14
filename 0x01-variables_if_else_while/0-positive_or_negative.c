#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - header files
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("The number %d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("The number %d is zero\n", n);
	}
	else
	{
		printf("The number %d is positive\n", n);
	}
	return (0);
}
