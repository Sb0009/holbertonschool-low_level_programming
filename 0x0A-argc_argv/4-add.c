#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the addition of argv's numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */


int main(__attribute__((unused))int argc, char *argv[])
{
	int m = 1, n = 0, sum = 0;

	if (argc > 1)
	{
		while (m < argc)
		{
			while (argv[m][n] != 0)
			{
				if (!isdigit(argv[m][n++]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[m++]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
