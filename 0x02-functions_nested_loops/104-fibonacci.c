#include <stdio.h>

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
long int pf, af, f;

pf = 1;
af = 2;
printf("1, ");
printf("2, ");
for (i = 0; i < 101; i++)
{
f = pf + af;
pf = af;
af = f;
if (i != 100)
{
printf("%ld, ", f);
}
else
{
printf("%ld\n", f);
}
}
return (0);
}
