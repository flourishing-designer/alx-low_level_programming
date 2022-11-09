#include <stdio.h>

/**
 * main - prints its name followed by a new line.
 * @argc: number of command line arguements.
 * @argv: array that contain the program command line arguements.
 * Return: 0 - success.
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
