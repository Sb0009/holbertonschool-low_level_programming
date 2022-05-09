#include "main.h"

/**
 *_strncpy - copy src into dest.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, s = 0;

	while (n > s)
	{
		if (src[s] == '\0')
		{
			for (; s < n; s++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[s];
			s++;
			i++;
		}
	}

	return (dest);
}
