#include "main.c"

/**
  * swap_int - Function that swaps the values of two integers
  * @a: Integer to swap
  * @b: Integer to swap
  */
void swap_int(int *a, int *b)
{
	int y;
y = *a;
*a = *b;
*b = y;
}
