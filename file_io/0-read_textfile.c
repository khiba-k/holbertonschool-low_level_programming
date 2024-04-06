#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *read_textfile - function reads text file and prints it
 *@filename: name of file to print
 *@letters: number of letters to read and print
 *Return: number of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readf, writeit;
	char *s;

	if (filename == NULL)
		return (0);

	s = malloc(letters * sizeof(char) + 1);
	if (!s)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(s);
		return (0);
	}

	readf = read(fd, s, letters);
	if (readf == -1)
	{
		free(s);
		return (0);
	}

	writeit = write(STDOUT_FILENO, s, readf);
	close(fd);
	free(s);
	if (readf == writeit)
		return (writeit);

	return (0);
}
