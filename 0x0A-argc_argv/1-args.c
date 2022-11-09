#include <stdio.h>

/**
 * main - prints the number of arguements pass into it.
 * @argc: number of command line arguements.
 * @argv: array that contains the program command line arguement.
 * Return: 0 if successsful.
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
