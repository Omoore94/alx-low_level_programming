#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: no return.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a; /* store ptr a into c */
	*a = *b; /* store ptr b into ptr a */
	*b = c; /* store h the value of c into pointer b */
}
