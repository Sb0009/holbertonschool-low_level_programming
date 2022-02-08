#include <stdio.h>

/**
* main - prints the sum check the code
*
* Return: (0).
*/
int main(void)
{
int i, n;

n = 0;
for (i = 3; i < 1024; i++)
{
if (((i % 3) == 0) || ((i % 5) == 0))
{
n = n + i;
}
}
printf("%d\n", n);
return (0);
}
