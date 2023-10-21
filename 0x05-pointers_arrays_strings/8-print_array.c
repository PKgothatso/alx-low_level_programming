#include "main.h"
/**
 * print_array: Prints n elements of an array.
 * @a: The array to be printed.
 * @n: The number of elements to be printed from the array.
 *
 * Descrip: This function prints the first 'n' elements of the given array 'a'
 * separated by commas and follwed by a newline.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
		printf("\n");
}
