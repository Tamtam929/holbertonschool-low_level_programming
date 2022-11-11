#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	long countwrite;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		countwrite = write(fd, text_content, _strlen(text_content));
	}
	close(fd);
	if (countwrite == -1)
	{
		return (-1);
	}
	return (1);
}
/**
 * _strlen - function that counts characters.
 * @s: string to count its chars.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
{
		length++;
		s++;
	}
	return (length);
}
