#include "main.h"

/**
 * puts2 - funtion should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)

{
	int i;
	int longi = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
