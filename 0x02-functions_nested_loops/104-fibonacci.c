#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
long int pf, af, f, f1, f2, f3;

pf = 1;
af = 2;
printf("1, ");
printf("2, ");
for (i = 0; i < 98; i++)
{
f = pf + af;
pf = af;
af = f;
if (f < 10000000)
{
printf("%lu", f);
}
else if ((f > 10000000) && (f < 100000000000000))
{
f2 = f / 10000000;
f3 = f % 10000000;
printf("%lu", f2);
printf("%lu", f3);
}
else
{
f1 = f / 100000000000000;
f2 = (f % 100000000000000) / 10000000;
f3 = f % 10000000;
printf("%lu", f1);
printf("%lu, ", f2);
printf("%lu, ", f3);
}
if (i != 100)
{
printf(", ");
}
}
printf("\n");
return (0);
}
