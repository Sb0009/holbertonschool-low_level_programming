#include "search_algos.h"

/**
 * print_array - print the current array given rules on format
 * @array: array to print
 * @begin: starting increment index
 * @final: last position in array
 */
 
void print_array(int *array, int begin, int final)
{
	int i;

	printf("Searching in array: ");
	for (i = begin; i < final; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

/**
 * binary_search - binary search a ascending sorted array to find a value.
 * No duplicates in array. Must print subarray each split.
 * @array: pointer to first element in array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of matched value in array or -1 if error or not found
 */
int binary_search(int *array, size_t size, int value)
{
	int begin, final, middle, objetive;

	objetive = value;
	final = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	begin = 0;
	/*Search for middle in the array*/
	while (begin <= final)
	{
		print_array(array, begin, final);
		middle = (begin + final) / 2;
		if (array[middle] == objetive)
			return (middle);
		else if (array[middle] < objetive)
			begin = middle + 1;
		else
			final = middle - 1;

	}

	return (-1);

}
