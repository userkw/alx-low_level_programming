#include "main.h"

/**
 * print_binary - prints the bin
 * @n: numbe
 */
void print_binary(unsigned long int n)
{
	int i, coun = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			coun++;
		}
		else if (coun)
			_putchar('0');
	}
	if (!coun)
		_putchar('0');
}
