#include "main.h"
/**
 * op_file - open files and cheching
 * @file_from: file_from argument
 * @file_to: file_to argument
 * @ff: ff arg
 * @ft: ft arg
 */
void op_file(char *file_from, char *file_to, int ff, int ft)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);

}
/**
 * cp_file - copies the content of a file to another file
 * @file_from: name of the file
 * @file_to: file destination
 */
void cp_file(char *file_from, char *file_to)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}
/**
 * main - check the code
 * @ac: number of args
 * @av: args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}
