#include <stdio.h>

/**
* main - Initial function
*
*Return: return 0 to success
*/

int main(void)
{
int n
{
int f1 = 0;
int f2 = 1;
int fn;
for (int i = 2; i < n; i++)
{
fn = f1 + f2;
f1 = f2;
f2 = fn;
}
}
