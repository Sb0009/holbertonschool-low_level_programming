#include "main.h"

/**
 * _isdigit - checks the input 0 -9 table ASCII
 *@c: input to check
 *
 * Return: On success 1.
 * On error or no uppercase, 0 is returned.
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
