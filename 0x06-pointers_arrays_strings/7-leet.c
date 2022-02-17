
#include "main.h"

/**
* leet - encodes a string into 1337 elite-hacker-style
* @strg: string to encode
*
* Return: strg
*/

char *leet(char *strg)
{
int i, j;
char m[] = "aAeEoOtTlL";
char n[] = "4433007711";

for (i = 0; *(strg + i); i++)
{
for (j = 0; j <= 9; j++)
{
if (m[j] == strg[i])
strg[i] = n[j];
}
}
return (strg);
}
