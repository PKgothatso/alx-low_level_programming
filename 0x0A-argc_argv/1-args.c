#include <stdio.h>
#include "main.h"
/**
 * main - Print the number of arguments passed to the program.
 * @argc: The number of command line arguments.
 * @argv: An array of command line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
		printf("%d\n", argc - 1);

		return (0);
}
