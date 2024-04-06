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
	
	if (text_content != NULL)
	{
		size_t len = strlen(text_content);
		text_content = malloc((len + 1) * sizeof(char));
	}

	fd = open(filename, O_RDWR | O_CREAT, 0644);

	if (fd != -1)
	{
		writef = write(fd, text_content, sizeof(text_content));
		return (writef);
	}

	return (0);
}
