#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - copy of string given as a parameter.
 *@str: Pointer
 *Return: return depends of cell.
 */
char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	a = malloc(i * sizeof(*str) + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; j < i; j++)
	{
		a[j] = str[j];
	}
	a[j] = '\0';
	return (a);
}
