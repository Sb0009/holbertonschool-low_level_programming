#include "main.h"

/**
 * string_toupper - Change lowercase to Uppercase
 * @s: string
 * Return: char
 */

char *string_toupper(char *s)
{

while (*s)
{
*s = ((unsigned char) *s);
s++;
}

return (s);
}
