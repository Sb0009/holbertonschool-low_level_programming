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


int fiboIt(int n)
{
int F0 = 1, F1 = 1, F = F1;
if (n==0) F = F0 ;
for(int i = 2; i<= n; ++i)
{
F = F0+F1;
F0 = F1;
F1 = F;
}
return F;
}
