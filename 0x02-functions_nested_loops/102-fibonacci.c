#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
unsigned long a, b, c;
int i;

a = 1;
b = 2;
printf("1, 2");
for (i = 0; i < 48; i++)
{
c = a + b;
printf(", %lu", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
