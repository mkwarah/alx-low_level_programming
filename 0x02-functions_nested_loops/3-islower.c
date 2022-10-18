#include "main.h"
/**
 *_islower - it will check if its lower case
 *@c: represents the character that is being checked
 * Return: will return 1 if its lower case if not then 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
