#include <stdio.h>
#include "main.h"

/**
 * main - prints all args
 * @argc: nbr
 * @argv: array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int A;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
