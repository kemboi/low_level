#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - reads textfile
 * @filename: file descriptor
 * @text_content: content to write
 * Return: returns 1 success or -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC,
			0600);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		write(fp, text_content, strlen(text_content));
		return (1);
	}
	return (1);
	close(fp);
}
