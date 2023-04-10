#include "main.h"

/**
 * get_endianness - prototype
 * Return: output
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *z = (char *) &y;

	return (*z);
}
