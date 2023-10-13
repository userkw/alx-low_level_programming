#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 ten times followed by a new line.
 */
void more_numbers(void)
{
    int i, num;

    for (i = 0; i < 10; i++) // Repeat 10 times
    {
        for (num = 0; num <= 14; num++)
        {
            if (num > 9)
            {
                _putchar(num / 10 + '0'); // Print the tens digit
            }
            _putchar(num % 10 + '0'); // Print the ones digit
        }
        _putchar('\n'); // New line after each iteration
    }
}
