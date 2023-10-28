#include <stdio.h>

/**
 * main - Program that prints all command line arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int c;

    for (c = 0; c < argc; c++)
    {
        printf("%s\n", argv[c]);
    }

    return (0);
}
