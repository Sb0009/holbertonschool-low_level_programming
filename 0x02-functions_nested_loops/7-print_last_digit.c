#include "main.h"

/**
* print_last_digit-check the code
* @n:number
* Return: the last digit of a numbr .
*/
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = n * -1;
}
_putchar(n + '0');
return (n);
}
