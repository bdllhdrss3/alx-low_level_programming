#include "main.h"

/**
 * swap_int: swap ints
 * @a: int a pointer
 * @b: int b pointer
 * Description: desc
 * Return: void
 */


void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
