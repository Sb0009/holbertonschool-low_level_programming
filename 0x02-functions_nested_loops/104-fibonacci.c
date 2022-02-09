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
for (i = 0; i < 96; i++)
{
f = pf + af;
pf = af;
af = f;
if (f < 100)
{
printf("%ld", f);
}
else if ((f > 100) && (f < 100))
{
f2 = f / 100;
f3 = f % 100;
printf("%ld", f2);
printf("%ld", f3);
}
else
{
f1 = f / 100;
f2 = (f % 100) / 100;
f3 = f % 100;
printf("%ld", f1);
printf("%ld, ", f2);
printf("%ld, ", f3);
}
if (i != 96)
{
printf(", ");
}
}
printf("\n");
return (0);
}
