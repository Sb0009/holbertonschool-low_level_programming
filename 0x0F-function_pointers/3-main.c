#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Perform calcul on 2 numbers
 * @argc: counter arg
 * @argv: vector arg
 * Return: 0 (success)
 **/

int main(int argc, char *argv[])
{
	int a, b;
	int (*c)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}

	c = get_op_func(argv[2]);
	if (c == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", c(a, b));

	return (0);
}
