#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 89 ; i++)
{
if ((i / 10) < (i % 10);)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
}
if (i < 89 && (i / 10) < (i % 10))
{
putchar(',');
putchar(' ');
}
if (i == 10 ; i +2) ; 
}
putchar('\n');
return (0);
}
