#include "main.h"

/**
 * get_endianness - checks
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *cb = (char *) &a;

	return (*cb);
}
