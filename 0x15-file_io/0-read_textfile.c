#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *Return: number of letters it could read and print or 0 if error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t countread;
	ssize_t countwrite;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(letters * (sizeof(char)));
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	countread = read(fd, buff, letters);
	close(fd);
	if (countread == -1)
	{
		free(buff);
		return (0);
	}
	countwrite = write(STDOUT_FILENO, buff, countread);
	free(buff);
	if (countread != countwrite)
	{
		return (0);
	}
	return (countread);
}

