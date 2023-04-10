#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads textfile
 * @filename: file descriptor
 * @letters: number of letters to read and print
 * Return: returns the actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	int fp;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	fp = open(filename, O_RDONLY, 0);

	if (fp == -1)
		return (0);
	count = read(fp, buf, letters);
	if (write(STDOUT_FILENO, buf, count) != count)
		return (0);
	close(fp);
	free(buf);
	return (count);
}
