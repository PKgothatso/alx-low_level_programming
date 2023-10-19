#include "main.h"
/**
 * string_toupper - Changes all lowercase characters to uppercase.
 * @n: Apointer to the string to be modified.
 *
 * Return: n.
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
