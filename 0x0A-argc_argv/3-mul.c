#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - Multiplies two numbers.
 *@argc: The number of commanf line arguments.
 *@argv: An array of commmand line arguments.
 *
 *Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
