#include "main.h"

/**
* _isupper - check code
* @c: character uper only
* Return: Always 0.
*/

int _isupper(int c)
{

	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
