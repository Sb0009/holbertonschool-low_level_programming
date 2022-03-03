#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat -for concatening two str.
 *@s1: Ptr type  char
 *@s2: Ptr type  char
 *@n: Var type of unsigned integer
 *Return: return ptr
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *a;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] ; i++)
		;
	for (l = 0; s2[l]; l++)
		;

	a = (char *)malloc((i + n + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (j = 0, k = 0; j < (n + i); j++)
	{
		if (j < i)
			a[j] = s1[j];
		else if (j <= (l + i))
			a[j] = s2[k++];
		else
		{
			a = (char *)realloc(a, i + l + 1);
			break;
		}
	}
	if (n < l)
	  a[j] = 0;

	return (a);

}
