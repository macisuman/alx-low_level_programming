#include "main.h"
/**
* _puts - function that prints a string with new line
* @str : variable for string
*/

void _puts(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
