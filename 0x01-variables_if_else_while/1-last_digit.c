#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checking numbers if they are above 5
 * Return: Returns 0
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l % 10;
	if (l > 5)
	{
		printf("The last digit of %d is %d and is greater tahn 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("The last digit of %d is %d  and is 0\n", n, l);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);