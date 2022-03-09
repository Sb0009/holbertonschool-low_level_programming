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
	int index = 0;

if (array && cmp && size < 0)
{
for (index = 0; index < size ; index++)
{
if (cmp(array[index]) == 0)
return (index);
}
return (-1);
}
return (-1);
}
