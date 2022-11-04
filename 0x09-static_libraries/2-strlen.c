#include "main.h"
/**
 * _strlen - return the length of a string
 * Herrings
 * @s: char to check
 * Description: returns the length of a string
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
