#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checking numbers if they are above 5
 * Return: Returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*l % 10;*/
	if (n > 5)
	{
		printf("%d is greater tahn 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d is 0\n", n);
	}
	else
	{
		printf("%d is less than 6 and not 0\n", n);
	}
	return (0);
