#include <stdio.h>
/**
 * main - Program that prints the number of arguments passed into it
 * @argc: Number of arguments
 * @argv: Array with the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
