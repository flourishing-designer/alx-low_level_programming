#include <stdio.h>
/**
<<<<<<< HEAD
 * main - print all combinations of single digits.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
	}
=======
 * main - program entry point.
 * Return: 0 success, non zero error.
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar('');
		}
	}
	putchar('\n');
	return (0);
}
>>>>>>> c13c049770ad1e0d9844619e79bfbb8525ad465f
