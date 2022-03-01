#include "main.h"
#include <stdlib.h>
/**
 *create_array - Array of chars, initialized with  specific char.
 *@size: Variable type of integer.
 *@c: Variable type of char
 *Return: return array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size == 0)
	{
		return (NULL);
	}

	A = malloc(size * sizeof(char));
	if (A == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
	{
		A[i] += c;
	}
	return (A);
}
