#include <stdio.h>

/**
 * main - prints all arguements it receives.
 * @argc: number of command line arguement.
 * @argv: array that contains the program command line arguements.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
