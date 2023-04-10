#include "main.h"

/**
 * flip_bits - prototype
 * @n: arg
 * @m: arg
 * Return: output
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int z, mount = 0;
unsigned long int curt;
unsigned long int sive = n ^ m;

for (z = 63; z >= 0; z--)
{
current = sive >> z;
if (curt & 1)
	mount++;
}

return (mount);
}
