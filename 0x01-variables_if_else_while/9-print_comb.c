#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Your Are Amazing 0 (Success)
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c < '9')
{
putchar(',');
putchar(' ');
}
else
putchar('\n');
}
return (0);
}
