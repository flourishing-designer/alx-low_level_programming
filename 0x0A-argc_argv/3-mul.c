#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguements.
 * @argv: array that contains the program command line arguements.
 * Return:1 if error, 0 if successful.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
