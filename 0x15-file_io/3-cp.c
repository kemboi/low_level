#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * main - main function
 * @argc: ..
 * @argv: ..
 * Return: ...
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_text_from_file_a_to_b(argv[1], argv[2]);
	return (0);
}
/**
 * copy_text_from_file_a_to_b - reads textfile
 * @src: src file
 * @dest: dest file
 * Return: none
 */
void copy_text_from_file_a_to_b(const char *src, const char *dest)
{
	int size, fpfrom, fpto = 0;
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	fpfrom = open(src, O_RDONLY);

	if (fpfrom == -1 || !src)
	{
		dprintf(2, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	fpto = open(dest, O_CREAT | O_RDWR | O_TRUNC, 0664);
	while ((size = read(fpfrom, buff, 1024)) > 0)
	{
		if (write(fpto, buff, size) != size || fpto == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (size == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(fpfrom) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fpfrom);
		exit(100);
	}
	if (close(fpto) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fpto);
		exit(100);
	}
}
