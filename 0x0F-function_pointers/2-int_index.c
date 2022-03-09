#include "function_pointers.h"

/**
*int_index - Function that searches for index .
*@array: Pointer type of int.
*@size: size of the array  int
*@cmp: function called
*Return: Return index integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size ; index++)
	{
		if (cmp(array[index]))
			return (index);
	}

	return (-1);
}
