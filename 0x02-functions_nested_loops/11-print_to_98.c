#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print  nbr to 98 .
* @n: the numbr to start  .
* Return: void.
*/
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n < 98)
{
n++;
}
else
{
n--;
}
}
printf("98");
printf("\n");
}
