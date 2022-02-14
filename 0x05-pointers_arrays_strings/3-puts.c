#include "main.h"
#include <stdio.h>
/**
* _puts - main function
* @str: main
* Return: succes 0
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
