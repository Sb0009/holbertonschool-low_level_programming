#include "main.h"
/**
 *_strstr - finds the first occurence of the substring needle in the string
 *@haystack: A variable for the  output
 *@needle: A variable value haystack.
 *Return: null if the word not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int s, f , t;

	s = 0;
	while (haystack[s] != '\0')
	{
		t = s;
		f = 0;
		while (needle[f] != '\0' && needle[f] == haystack[s]
		       && haystack[s] != '\0')
		{
			s++;
			f++;
		}
		if (needle[f] == '\0')
		{
			return (haystack + t);
		}
		s = t + 1;
	}
	return (0);
}
