#include "main.h"
/**
 *largest_number - gives the largest number
 *@a: the first number
 *@b: the second number
 *@c: the third number
 *Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
}
