#include "main.h"

/**
 * swap_int - swaps the values of twointegers
 * @a: The first integer
 * @b: The last integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
/* The function that swaps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
