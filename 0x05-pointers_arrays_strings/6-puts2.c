#include "main.h"

/**
 * puts2 - print strings
 * starting with the first one
 * @str: funtion parameter
 * Return: 0
 */

void puts2(char *str)

{
	int i;

	for (o = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
