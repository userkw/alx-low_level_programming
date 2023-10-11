#include <stdio.h>
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
