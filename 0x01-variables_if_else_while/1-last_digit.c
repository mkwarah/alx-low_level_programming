#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checking numbers if they are above 5
 * Return: Returns 0
 */
int main(void)
{
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*l % 10;*/
	if (l > 5)
	{
		printf("%d is greater tahn 5\n", l);
	}
	else if (l == 0)
	{
		printf("%d is 0\n", l);
	}
	else
	{
		printf("%d is less than 6 and not 0\n", l);
	}
	return (0);
