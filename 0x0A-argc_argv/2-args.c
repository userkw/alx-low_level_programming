#include <stdio.h>
#include "main.h"

/**
 * main - Program that prints all command line arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int j;

    for (j = 0; j < argc; j++)
    {
        printf("%s\n", argv[j]);
    }

    return 0;
}
