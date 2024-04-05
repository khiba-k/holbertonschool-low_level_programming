#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[3000];
	int fd;
	size_t i;
	fd = open("temp.txt", O_RDWR);

	if (fd != -1)
	{
		write(fd, filename, sizeof(filename));
		read(fd, buffer, sizeof(filename));
		printf("%s", buffer);
	}
	for (i = 0; i < letters; i++)
		return (i);
	return (0);
}
