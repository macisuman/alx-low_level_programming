#include "main.h"
/**
 * puts_half - prints half of strings
 * @str: string
 * Return: empty
 */
void puts_half(char *str)
{i
	int i, j, max;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	j = max / 2;
	while (j == max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
