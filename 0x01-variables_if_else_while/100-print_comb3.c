#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i ;
for (i = 0 ; i < 89 ; i = i + 2)
{
printf("iteration %d \n", i);
}
printf("valeur de i apres la boucle : %d \n", i);
return (0) ;
}
