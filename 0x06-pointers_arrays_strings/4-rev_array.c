#include "main.h"
/**
 * reverse_array - Reverse an arry of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 *
 * Return: None (void).
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0, i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
