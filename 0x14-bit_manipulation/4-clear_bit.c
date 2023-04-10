#include "main.h"

/**
* clear_bit - prototype
* @n: arg
* @index: arg
* Return: output
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
