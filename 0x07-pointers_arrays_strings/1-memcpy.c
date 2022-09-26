#include "main.h"
/**
* _memcpy - function that copies memory area
* @dest: where to copy memory to
* @src: where memory is copied from
* @n: the number of bytes
* Return: a pointer to @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
