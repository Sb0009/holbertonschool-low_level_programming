#include "main.h"

/**
 *_strncat - concatenates 2 strings.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, s = 0;

	while (dest[i] != '\0')
		i++;

	while (src[s] != '\0' && n > s)
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	if (n > 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}
