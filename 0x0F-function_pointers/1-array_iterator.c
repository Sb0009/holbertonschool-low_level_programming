#include "function_pointers.h"

/**
*array_iterator - Function given as a parameter on each element of an array.
*@array: Pointer type integer.
*@size:the size of the array type sixte_t
*@action: function adress.
*/



void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size > 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
