#include "main.h"

/**
* clear_bit - function
* @n: 
* @index: 
* Return: 1 if success or -1 if failed
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
