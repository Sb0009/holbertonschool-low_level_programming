#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - recive two strings
 * @s1: first string
 * @s2: second string
 * Return: a string concattning  append 1st and 2nd .
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, siz = 0;
	char *s0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	siz = i + j;
	s0 = (char *) malloc((siz + 1) * sizeof(char));
	if (s0 == 0)
		return (NULL);

	for (i = 0; i < siz - j; i++)
		s0[i] = s1[i];
	for (j = 0; i <= siz; j++, i++)
		s0[i] = s2[j];
	s0[i + 1] = '\0';
	return (s0);
}
