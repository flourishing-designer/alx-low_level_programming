#include "main.h"
/**
 * print_alphabets - print all alphabets in lowercase.
 * Return: on success 1.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
