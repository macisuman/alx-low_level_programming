#include "main.h"
/**
* _isupper - checking for upper case character
* @c: container for character to be assigned
* Return: bring back 1 if uppercase and 0 if lowecase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
