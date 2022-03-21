#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: integer
 * @b: integer
 * Description: swap_int swaps the value of *a and *b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
