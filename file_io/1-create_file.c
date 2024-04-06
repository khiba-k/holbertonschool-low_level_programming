#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writef;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		size_t len = strlen(text_content);
		text_content = malloc((len + 1) * sizeof(char));
	}
	writef = write(fd, text_content, sizeof(text_content));
	if (writef == -1)
		return (-1);

	return (1);
}
