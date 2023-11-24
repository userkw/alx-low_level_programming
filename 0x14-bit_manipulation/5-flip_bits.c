#include "main.h"

/**
 * flip_bits - counts
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, coun = 0;
	unsigned long int curr;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = ex >> i;
		if (curr & 1)
			coun++;
	}

	return (coun);
}
