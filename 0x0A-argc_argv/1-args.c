#include <stdio.h>

/**
 * main - prints the number of arguements passed into it.
 * @argc: number of command line arguements.
 * @argv: array that contain the program command line arguements.
 *Return: 0 if succesful.
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
