#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - header files
 * Return: 0
 * /
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*I will put my code here*/
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is Zero\n", n);
	} else
	{
		printf{"%d is positive\n", n);
	}
	return (0);
}
