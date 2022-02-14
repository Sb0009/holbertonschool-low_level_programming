#include "main.h"

/**
 * char *_strcpy - Copie the string pointed  by src to dest
 * @dest: Destination
 * @src: Source
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
