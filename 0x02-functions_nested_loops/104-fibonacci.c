#include "main.h"
#include <stdio.h>

/**
 * main - calls fibonacci
 *
 * Return: always 0
 */
int main(void)
{
fibonacci_print_100();
return (0);
}

/**
 * fibonacci_print_100 - print first 100 fibonacci numbers
 *
 * Return: void
 */
void fibonacci_print_100(void)
{
unsigned long i, a1, a2, b1, b2, c1, c2, s, g;

s = 1000000000000000;
a1 = 0;
a2 = 1;
b1 = 0;
b2 = 2;
for (i = 0; i < 98; i++)
{
if (a1)
printf("%lu", a1);
printf("%lu", a2);
if (i < 98)
printf(", ");
c1 = a1;
c2 = a2;
a1 = b1;
a2 = b2;
b1 += c1;
b2 += c2;
g = b2 / s;
b2 %= s;
b1 += g;
}

printf("%lu%lu\n", c1, c2);
}
