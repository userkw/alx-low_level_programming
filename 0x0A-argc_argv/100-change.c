#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum nubr
 * make change for an amount of money
 * @argc: nbr of arguments
 * @argv: aray of arguments
 *
 * Return: 0, or 1
 */
int main(int argc, char *argv[])
{
	int num, j, reslt;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	reslt = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			reslt++;
			num -= coins[j];
		}
	}

	printf("%d\n", reslt);
	return (0);
}
