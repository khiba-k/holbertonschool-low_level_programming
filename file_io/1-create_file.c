#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 *create_file - function creates a file
 *@filename: pointer to file to create
 *@text_content: pointer to text to write in file
 *Return: value to return
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writef, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	writef = write(fd, text_content, i);
	if (writef == -1)
		return (-1);

	return (1);
}
