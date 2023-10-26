#include "main.h"
/**
 * _strlen_recursion - Fun recursively calculates the lenght of a string.
 * @s: The string for which the lenght is to be calculated.
 *
 * Return: The lenght of a string
 */
int _strlen_recursion(char *s)
{
	int lnt = 0;

	if (*s)
	{
	lnt++;
	lnt += _strlen_recursion(s + 1);
	}
	return (lnt);
}
