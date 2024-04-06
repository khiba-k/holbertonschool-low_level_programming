#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 *append_text_to_file - function appends text a file
 *@filename: pointer to file to append to
 *@text_content: pointer to text to write to append
 *Return: value to return
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writef, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);
	fd = open(filename, O_RDWR | O_APPEND, 0666);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	writef = write(fd, text_content, i);
	if (writef == -1)
	return (-1);

	return (1);
}
