#include <stdio.h>
#include <error.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * append_text_to_file - appends to textfile
 * @filename: file descriptor
 * @text_content: content to write
 * Return: returns 1 success or -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND | O_EXCL);
	if (fp == -1)
		return (-1);
	if (text_content)
	{
		write(fp, text_content, strlen(text_content));
		return (1);
	}
	return (1);
	close(fp);
}
