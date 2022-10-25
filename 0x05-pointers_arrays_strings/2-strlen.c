#include "main.h"
/**
 * _strlen - find the lenght of a string
 * @s: string pointer to the string whose lenght is to be found
 * Return: return the lenght of the string
 */

int _strlen(char *s)
{
	int p = 0;
	/*increment up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
