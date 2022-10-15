#include <stdio.h>
/**
 * main - print alphabets in lower and upper case
 * return : Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; CH <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
