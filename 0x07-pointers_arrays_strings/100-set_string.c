#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer to pointer.
 * @to: Pointer char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
