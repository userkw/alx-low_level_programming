#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Check if a string contains only digits
 * @str: Input string
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int check_num(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Sum the valid numeric command-line arguments
 * @argc: Argument count
 * @argv: Argument values
 *
 * Return: 0 for success, 1 for errors
 */
int main(int argc, char *argv[])
{
	int total = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]))
		{
			int str_to_int = atoi(argv[i]);
			total += str_to_int;
		}
		else
		{
			fprintf(stderr, "Error\n");
			return (1);
		}
	}

	printf("%d\n", total);

	return (0);
}
