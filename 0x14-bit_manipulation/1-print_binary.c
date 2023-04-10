#include "main.h"

/**
 * print_binary - prototype
 * @n: arg
 */
void print_binary(unsigned long int n)
{
	int z, mount = 0;
	unsigned long int curt;

	for (z = 63; z >= 0; z--)
	{
		curt = n >> z;

		if (curt & 1)
		{
			_putchar('1');
			mount++;
		}
		else if (mount)
			_putchar('0');
	}
	if (!mount)
		_putchar('0');
}
