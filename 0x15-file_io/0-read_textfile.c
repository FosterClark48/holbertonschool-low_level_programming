#include "main.h"
/**
*read_textfile - Reads text file & prints to stdout
*@filename: pointer to name of file
*@letters: number of letters it should print
*Return: number of letters to print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t len;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	len = read(fd, buff, letters);
	close(fd);
	if (len < 0)
	{
		free(buff);
		return (0);
	}

	len = write(STDOUT_FILENO, buff, len);
	if (len < 0)
	{
		free(buff);
		return (0);
	}
	return (len);
}
