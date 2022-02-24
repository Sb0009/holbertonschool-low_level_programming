#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings and returns 1
 * @s1: first string to compare
 * @s2: second string to comp  wildcards
 * Return: 1 if strings the same, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{
		if (*s2 == '*')
		return (wildcmp(s1, s2 + 1));
		return (!*s2);
	}
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
