#include "main.h"

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Filename address.
 * @letters: Number of chars to be printed and readed
 * Return: Number of chars printed  ( ssize_t ) or return 0 if failed
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, lecture, ecrit;
	char *str;

	if (filename == NULL)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	op = open(filename, O_RDWR);
	if (op == -1)
	{
		free(str);
		return (0);
	}

	lecture = read(op, str, letters);
	if (lecture == -1)
	{
		free(str);
		return (0);
	}

	ecrit = write(STDOUT_FILENO, str, lecture);
	if (ecrit == -1)
	{
		free(str);
		return (0);
	}

	close(op);
	free(str);
	return (ecrit);
}
