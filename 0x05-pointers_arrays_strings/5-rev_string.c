#include "main.h"
/**
 * rev_string - fonction
 * Return: zero
 * @s: parameters
 */
void rev_string(char *s)
{
char temp;
int i, j;

i = 0;
j = 0;

while (s[j] != 0)
j++;
j--;

while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}

}
