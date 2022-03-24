#include "main.h"

/**
 * reverse_array -reverse the content of an array of integer
 * @a: array of integers
 * @n: the number of elements to swap
 **/

void reverse_array(int *a, int n)
{
	int b, c;
	int temp;

	b = 0;
	c = n - 1;

	for (b = 0; b < (n - 1) / 2; b++, c--)
	{
		temp = a[b];
		a[b] = a[c];
		a[c] = temp;
	}
}
