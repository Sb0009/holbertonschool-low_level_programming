#include "main.h"

/**
* *string_toupper - function that changes all lowercase letters of a string
* to uppercase
*
* @strg: strg for string
*
* Return:changes all lowercase letters of a string to uppercase
*/
char *string_toupper(char *strg)
{
int i;

for (i = 0; strg[i] != '\0'; i++)
{
if (strg[i] >= 'a' && strg[i] <= 'z')
{
strg[i] = strg[i] - 32;
}
}
return (strg);
}
