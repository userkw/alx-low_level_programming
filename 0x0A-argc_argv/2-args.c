#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - function to multiply two numbers.
 * @num1: first number
 * @num2: second number
 *
 * Return: result of the multiplication
 **/
int multiply(int num1, int num2)
{
	return num1 * num2;
}

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: 0 if successful, 1 if there is an error
 **/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <num1> <num2>\n", argv[0]);
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
