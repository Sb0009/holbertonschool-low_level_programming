#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @strg: String
 * Return:  strg
 */

char *cap_string(char *strg)
{
int i = 0, j;
char a[] = "{} \n\t,;.!?\"()";

while (*(strg + i))
{
if (*(strg + i) >= 'a' && *(strg + i) <= 'z')
{
if (i == 0)
*(strg + i) -= 'a' - 'A';
else
{
for (j = 0; j <= 12; j++)
{
if (a[j] == *(strg + i - 1))
*(strg + i) -= 'a' - 'A';
}
}
}
i++;
}
return (strg);
}
