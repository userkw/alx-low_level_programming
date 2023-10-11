#include "main.h"
/**
* print_sign - Prints the sign of a number.
* @n: The number to check.
*
* Return: + for positive numbers, 0 for zero, - for negative numbers.
*/
int main(void)
{
int r;
r = print_sign(98);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0xff);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(-1);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
return (0);
}
