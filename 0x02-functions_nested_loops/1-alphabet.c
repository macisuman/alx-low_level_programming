#include "main.h"
/**
* print_alphabet - print alphabet
* main - I sometimes suffer from insomnia...
* return: empty function
*/

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
_putchar('\n');
}
