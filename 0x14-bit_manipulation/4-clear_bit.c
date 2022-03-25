#include "main.h"

/**
* clear_bit - function sets the value of a bit to 0 at a given index
* @n: pointer to decimal number to change
* @index: index position to change
* Return: 1 if success or -1 if failed
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 64)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
