#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_digit_string - checks if a string contains only digits
 * @str: the input string
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit_string(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
    int count;
    int str_to_int;
    int total = 0;

    for (count = 1; count < argc; count++) {
        if (is_digit_string(argv[count])) {
            str_to_int = atoi(argv[count]);
            total += str_to_int;
        } else {
            printf("Error\n");
            return 1;
        }
    }

    printf("%d\n", total);

    return 0;
}
