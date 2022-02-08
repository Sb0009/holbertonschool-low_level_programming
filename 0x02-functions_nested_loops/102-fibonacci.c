#include<stdio.h>
#include<math.h>

/**
* main - Write a program that computes and prints the sum of
* all the multiples of 3 or 5 below 1024 (excluded)
* i: Integer
* r: Result
* Return: On success 1.
*
*/

int fib (int n)
{  
int f[n+2]; 
int i; 
f[0] = 0;
f[1] = 1; 
for (i = 2; i <= n; i++)
{
f[i] = f[i 6-1] + f[i-2];
}
return f[n];
} 
int main(void)
{
int n = 9;
printf ("%d", fib(n));
getchar();
return 0;
}
