#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: number to be lookd for
 * @index: index of the bit
 *
 * Return: The value of the bit at index index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
