#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  0 Check code Fibonacci
 */

int main(void)
{
const unsigned long int max;
unsigned long int a, ao;
unsigned long int b, bo;
unsigned long int c, co;
int i;
a = 1;
ao = 0;
b = 2;
bo = 0;
c = 0;
co = 0;

max = 1000000000000000000;

printf("1, 2");
for (i = 0; i < 96; i++)
{
c = a + b;
co = ao + bo;
if (c > max - 1)
{
co += 1;
c %= max;
}
a = b;
ao = bo;
b = c;
bo = co;

printf(", ");
if (co != 0)
printf("%lu", co);
printf("%lu", c);
}
printf("\n");
return (0);
}
