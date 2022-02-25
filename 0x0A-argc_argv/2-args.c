#include <stdio.h>

/**
 *main - prints argv's arguments.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	
	{
		printf("%s\n", *(argv));
		argv++;
	}

	return(0);
}
