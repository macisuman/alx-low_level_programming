#include "main.h"
/**
* _strcat - concatenante two strings
* @dest: variable one
* @src: variable two
* Return: return 0
*/

char *_strcat(char *dest, char *src)
{
	char dest[], src[];
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		++length;
	}

	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';

	_putchar(dest);

	return (0);
}
