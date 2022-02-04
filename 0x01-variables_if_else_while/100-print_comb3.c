#include <stdio.h>

/**
* main - Initial function
*
*Return: return 0 to success
*/

int main() {
int i;
printf("Even numbers between 1 to 89 (inclusive):\n");
for (i = 1; i <= 89; i++) 
{
if(i%2 == 0) 
{
printf("%d ", i);
}
}
return 0;
}
