#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k_v;

	if (index > 63)
		return (-1);

	k_v = (n >> index) & 1;

	return (k_v);
}
