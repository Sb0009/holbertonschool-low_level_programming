#include "main.h"
#include <string.h>
/**
 *_strcat - concatinate 2 strings.
 *@dest: first strg.
 *@src: second strg.
 *Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
