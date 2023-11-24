#include "main.h"

/**
 * print_binary - prints the bin
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int a, cont = 0;
	unsigned long int cur;

	for (a = 63; a >= 0; a--)
	{
		cur = n >> a;

		if (cur & 1)
		{
			_putchar('1');
			coont++;
		}
		else if (cont)
			_putchar('0');
	}
	if (!cont)
		_putchar('0');
}
