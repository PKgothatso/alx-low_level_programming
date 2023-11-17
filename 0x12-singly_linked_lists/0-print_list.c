#include <stdio.h>
#include "lists.h"

/**
 *print_list - Prints all the elements of a list_t list.
 *@h: Pointer to the list_t list to print.
 *
 *Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		s++;
		h = h->next;
	}

	return (s);
}
