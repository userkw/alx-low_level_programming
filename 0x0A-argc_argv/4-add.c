#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - checks if a string consists of digits
 * @str: the input string to be checked
 *
 * Return: 1 if the string consists of digits, 0 otherwise
 */
int check_num(char *str)
{
    unsigned int cont;

    cont = 0;
    while (cont < strlen(str))
    {
        if (!isdigit(str[cont]))
        {
            return (0);
        }

        cont++;
    }
    return (1);
}

/**
 * main - Print the sum of command line arguments that are numbers
 * @argc: Count of command line arguments
 * @argv: Array of command line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int count;
    int str_to_int;
    int summ = 0;

    count = 1;
    while (count < argc)
    {
        if (check_num(argv[count]))
        {
            str_to_int = atoi(argv[count]);
            summ += str_to_int;
        }
        else
        {
            printf("Error\n");
            return (1);
        }

        count++;
    }

    printf("%d\n", summ);

    return (0);
}
