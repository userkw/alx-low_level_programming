#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));  /* Seed the random number generator */
n = rand() - RAND_MAX / 2;  /* Generate a random number */
printf("%d is", n);
if (n > 0)
{
printf(" positive\n");
}
else if (n == 0)
{
printf(" zero\n");
}
else
{
printf(" negative\n");
}
return (0);
}
