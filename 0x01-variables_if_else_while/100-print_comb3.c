#include <stdio.h>

/**
* main - Initial function
*
*Return: return 0 to success
*/

int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = i; j < 58; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
putchar(i == 56 && j == 57 ? '\n' : ',');
if (i != 56 || j != 57)
putchar(' ');
}

return (0);
