#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Argument count
 * @argv: List of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int mult = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);

	return (0);
}
