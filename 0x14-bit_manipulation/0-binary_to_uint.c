#include "main.h"

/**
 * binary_to_uint - converts a bin nbr
 * @b: string
 *
 * Return: nbr
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		val = 2 * val + (b[a] - '0');
	}

	return (val);
}
