#include "main.h"
/**
* _strcat - concatenante two strings
* @dest: variable one
* @src: variable two
* Return: return 0
*/

char *_strcat(char *dest, char *src)
{

	int length = 0;

	int j = 0;

	while (dest[length] != '\0')
	{
		++length;
	}

	for (j = 0; src[j] != '\0'; ++j, ++length)
	{
		dest[length] += src[j];
	}
	dest[length] = '\0';

	return (dest);
}
