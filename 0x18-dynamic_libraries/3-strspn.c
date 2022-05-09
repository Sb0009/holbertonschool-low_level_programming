#include "main.h"

/**
* _strspn - main function
* @s: initial segment of s
* @accept: bytes from accept
* Return: calculates the length of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
int byt = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (byt != i)
break;
for (j = 0; accept[j] != '\0'; j++)
{
{
if (s[i] == accept[j])
byt++;
}
}
}
return (byt);
}
