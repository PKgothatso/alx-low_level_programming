#include "main.h"
/**
 * factorial - Function calculates the factorial of a given integer.
 * @n: The integer for which the factorial is computed.
 *
 * Return: The factorial of the input integer 'n'.
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
