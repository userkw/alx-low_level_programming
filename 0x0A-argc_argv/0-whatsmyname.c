#include <stdio.h>
/**
 * main - Program that prints its name, followed by a new line
 * @argc: Number of args
 * @argv: Array with the args
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
