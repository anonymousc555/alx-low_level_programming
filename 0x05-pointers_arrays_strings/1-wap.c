#include "main.h"

/**
 * swap_int - swaps the value of two int
 * @a: The first int
 * @b: The second int
 */
void swap_int(int *a, int *b)
{
	int A = *a;
	*a = *b;
	*b = A;
}
