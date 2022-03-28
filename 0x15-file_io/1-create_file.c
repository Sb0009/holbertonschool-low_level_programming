#include "main.h"
/**
*create_file - funct creates a file.
*@filename:char string of file name
*@text_content: size or total  letters to read.
*Return: return 1 succes or -1 if failed.
*/
int create_file(const char *filename, char *text_content)
{
	int fdopen, status, i;

	if (filename == NULL)
		return (-1);

	fdopen = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fdopen == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		status = write(fdopen, text_content, i);
		if (status == -1)
			return (-1);
	}

	close(fdopen);
	return (1);
}
