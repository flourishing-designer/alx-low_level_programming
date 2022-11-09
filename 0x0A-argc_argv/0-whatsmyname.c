#include <stdio.h>

/**
 * main - prints its name followed by a new line.
 * @argc: number of command line arguements.
 * @argv: array that contain the program commmand line arguements.
 * Return: 0 if succesful.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
