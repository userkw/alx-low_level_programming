#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the first 50 Fibonacci numbers.
* Each number is separated by a comma and a space.
*
* Return: Always 0 (Success)
*/
int main(void)
{
long int prev = 1;
long int current = 2;
long int next;
int count;
printf("%ld, %ld", prev, current);
for (count = 3; count <= 50; count++)
{
next = prev + current;
printf(", %ld", next);
prev = current;
current = next;
}
printf("\n");
return 0;
}
